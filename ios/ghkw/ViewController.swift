//
//  ViewController.swift
//  ghkw

import UIKit
import GhkwClient

class ViewController: UIViewController {
    @IBOutlet weak var tokenTextView: UITextField!
    @IBOutlet weak var searchTextView: UITextField!
    @IBOutlet weak var resultTableView: UITableView!
    @IBOutlet weak var searchButton: UIButton!
    
    private var dataSource: [KeywordResult] = []
    private let client = ApiClient()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        resultTableView.delegate = self
        resultTableView.dataSource = self
    }
    
    @IBAction func search(_ sender: Any) {
        guard let token = tokenTextView.text else {
            return
        }
        guard let words = searchTextView.text?.split(separator: ",") else {
            return
        }
        
        let task = client.searchAsync(words: words.map { String($0) }, token: token)
        task.invokeOnCompletion {[weak self] _ in
            guard let weakSelf = self else { return }
            let response = task.getCompleted()
            switch response {
            case (let result as Response.Success):
                weakSelf.dataSource = result.data
                weakSelf.resultTableView.reloadData()
            case (let err as Response.Error):
                let alert = UIAlertController(title: "Error", message: err.e.message, preferredStyle: .alert)
                alert.addAction(UIAlertAction(title: "OK", style: .default))
                weakSelf.present(alert, animated: true)
            default:
                fatalError("unknown case.")
            }
        }
    }
}

extension ViewController : UITableViewDelegate, UITableViewDataSource {
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return dataSource.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = UITableViewCell()
        let result = dataSource[indexPath.row]
        cell.textLabel!.text = "\(result.keyword): \(result.totalCount)"
        return cell
    }
}

