#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class GhkwClientKeywordResult, GhkwClientKotlinException, GhkwClientResponse, GhkwClientResponseSuccess, GhkwClientResponseError, GhkwClientKotlinEnum, GhkwClientLogLevel, GhkwClientKotlinThrowable, GhkwClientKotlinArray, GhkwClientKotlinx_coroutines_coreCancellationException, GhkwClientKotlinRuntimeException, GhkwClientKotlinIllegalStateException, GhkwClientKotlinx_coroutines_coreAtomicDesc, GhkwClientKotlinx_coroutines_coreAtomicOp, GhkwClientKotlinx_coroutines_coreOpDescriptor;

@protocol GhkwClientKotlinx_coroutines_coreDeferred, GhkwClientKotlinComparable, GhkwClientKotlinx_coroutines_coreSelectClause1, GhkwClientKotlinx_coroutines_coreChildHandle, GhkwClientKotlinx_coroutines_coreChildJob, GhkwClientKotlinx_coroutines_coreDisposableHandle, GhkwClientKotlinx_coroutines_coreJob, GhkwClientKotlinSequence, GhkwClientKotlinx_coroutines_coreSelectClause0, GhkwClientKotlinCoroutineContextKey, GhkwClientKotlinCoroutineContextElement, GhkwClientKotlinCoroutineContext, GhkwClientKotlinIterator, GhkwClientKotlinx_coroutines_coreSelectInstance, GhkwClientKotlinSuspendFunction1, GhkwClientKotlinx_coroutines_coreParentJob, GhkwClientKotlinSuspendFunction0, GhkwClientKotlinContinuation, GhkwClientKotlinSuspendFunction;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface GhkwClientMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface GhkwClientMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface GhkwClientNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface GhkwClientByte : GhkwClientNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface GhkwClientUByte : GhkwClientNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface GhkwClientShort : GhkwClientNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface GhkwClientUShort : GhkwClientNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface GhkwClientInt : GhkwClientNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface GhkwClientUInt : GhkwClientNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface GhkwClientLong : GhkwClientNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface GhkwClientULong : GhkwClientNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface GhkwClientFloat : GhkwClientNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface GhkwClientDouble : GhkwClientNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface GhkwClientBoolean : GhkwClientNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiClient")))
@interface GhkwClientApiClient : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)searchWords:(NSArray<NSString *> *)words token:(NSString *)token callback:(void (^)(NSArray<GhkwClientKeywordResult *> *))callback onError:(void (^)(GhkwClientKotlinException *))onError __attribute__((swift_name("search(words:token:callback:onError:)")));
- (id<GhkwClientKotlinx_coroutines_coreDeferred>)searchAsyncWords:(NSArray<NSString *> *)words token:(NSString *)token __attribute__((swift_name("searchAsync(words:token:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiClient.Companion")))
@interface GhkwClientApiClientCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("Response")))
@interface GhkwClientResponse : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response.Success")))
@interface GhkwClientResponseSuccess : GhkwClientResponse
- (instancetype)initWithData:(NSArray<GhkwClientKeywordResult *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSArray<GhkwClientKeywordResult *> *)component1 __attribute__((swift_name("component1()")));
- (GhkwClientResponseSuccess *)doCopyData:(NSArray<GhkwClientKeywordResult *> *)data __attribute__((swift_name("doCopy(data:)")));
@property (readonly) NSArray<GhkwClientKeywordResult *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response.Error")))
@interface GhkwClientResponseError : GhkwClientResponse
- (instancetype)initWithE:(GhkwClientKotlinException *)e __attribute__((swift_name("init(e:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (GhkwClientKotlinException *)component1 __attribute__((swift_name("component1()")));
- (GhkwClientResponseError *)doCopyE:(GhkwClientKotlinException *)e __attribute__((swift_name("doCopy(e:)")));
@property (readonly) GhkwClientKotlinException *e __attribute__((swift_name("e")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeywordResult")))
@interface GhkwClientKeywordResult : KotlinBase
- (instancetype)initWithKeyword:(NSString *)keyword totalCount:(int32_t)totalCount __attribute__((swift_name("init(keyword:totalCount:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (GhkwClientKeywordResult *)doCopyKeyword:(NSString *)keyword totalCount:(int32_t)totalCount __attribute__((swift_name("doCopy(keyword:totalCount:)")));
@property (readonly) NSString *keyword __attribute__((swift_name("keyword")));
@property (readonly) int32_t totalCount __attribute__((swift_name("totalCount")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol GhkwClientKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface GhkwClientKotlinEnum : KotlinBase <GhkwClientKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(GhkwClientKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface GhkwClientLogLevel : GhkwClientKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) GhkwClientLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) GhkwClientLogLevel *none __attribute__((swift_name("none")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(GhkwClientLogLevel *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface GhkwClientKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GhkwClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GhkwClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (GhkwClientKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GhkwClientKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface GhkwClientKotlinException : GhkwClientKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GhkwClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GhkwClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol GhkwClientKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<GhkwClientKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<GhkwClientKotlinCoroutineContextElement> _Nullable)getKey:(id<GhkwClientKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<GhkwClientKotlinCoroutineContext>)minusKeyKey:(id<GhkwClientKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<GhkwClientKotlinCoroutineContext>)plusContext:(id<GhkwClientKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol GhkwClientKotlinCoroutineContextElement <GhkwClientKotlinCoroutineContext>
@required
@property (readonly) id<GhkwClientKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol GhkwClientKotlinx_coroutines_coreJob <GhkwClientKotlinCoroutineContextElement>
@required
- (id<GhkwClientKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<GhkwClientKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(GhkwClientKotlinx_coroutines_coreCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (GhkwClientKotlinx_coroutines_coreCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<GhkwClientKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(GhkwClientKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<GhkwClientKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(GhkwClientKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<GhkwClientKotlinx_coroutines_coreJob>)plusOther:(id<GhkwClientKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<GhkwClientKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<GhkwClientKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDeferred")))
@protocol GhkwClientKotlinx_coroutines_coreDeferred <GhkwClientKotlinx_coroutines_coreJob>
@required
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));
- (GhkwClientKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<GhkwClientKotlinx_coroutines_coreSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface GhkwClientKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(GhkwClientInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<GhkwClientKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol GhkwClientKotlinx_coroutines_coreSelectClause1
@required
- (void)registerSelectClause1Select:(id<GhkwClientKotlinx_coroutines_coreSelectInstance>)select block:(id<GhkwClientKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause1(select:block:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol GhkwClientKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol GhkwClientKotlinx_coroutines_coreChildHandle <GhkwClientKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(GhkwClientKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol GhkwClientKotlinx_coroutines_coreChildJob <GhkwClientKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<GhkwClientKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface GhkwClientKotlinRuntimeException : GhkwClientKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GhkwClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GhkwClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface GhkwClientKotlinIllegalStateException : GhkwClientKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GhkwClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GhkwClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellationException")))
@interface GhkwClientKotlinx_coroutines_coreCancellationException : GhkwClientKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GhkwClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(GhkwClientKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol GhkwClientKotlinSequence
@required
- (id<GhkwClientKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol GhkwClientKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<GhkwClientKotlinx_coroutines_coreSelectInstance>)select block:(id<GhkwClientKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol GhkwClientKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol GhkwClientKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol GhkwClientKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<GhkwClientKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(GhkwClientKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectCancellableWithExceptionException:(GhkwClientKotlinThrowable *)exception __attribute__((swift_name("resumeSelectCancellableWithException(exception:)")));
- (BOOL)trySelectIdempotent:(id _Nullable)idempotent __attribute__((swift_name("trySelect(idempotent:)")));
@property (readonly) id<GhkwClientKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction")))
@protocol GhkwClientKotlinSuspendFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol GhkwClientKotlinSuspendFunction1 <GhkwClientKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol GhkwClientKotlinx_coroutines_coreParentJob <GhkwClientKotlinx_coroutines_coreJob>
@required
- (GhkwClientKotlinx_coroutines_coreCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol GhkwClientKotlinSuspendFunction0 <GhkwClientKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface GhkwClientKotlinx_coroutines_coreAtomicDesc : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(GhkwClientKotlinx_coroutines_coreAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(GhkwClientKotlinx_coroutines_coreAtomicOp *)op __attribute__((swift_name("prepare(op:)")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol GhkwClientKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<GhkwClientKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface GhkwClientKotlinx_coroutines_coreOpDescriptor : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface GhkwClientKotlinx_coroutines_coreAtomicOp : GhkwClientKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(id _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(id _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
- (BOOL)tryDecideDecision:(id _Nullable)decision __attribute__((swift_name("tryDecide(decision:)")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
