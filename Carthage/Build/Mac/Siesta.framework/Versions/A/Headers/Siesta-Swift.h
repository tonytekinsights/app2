// Generated by Apple Swift version 4.2 (swiftlang-1000.11.37.1 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Siesta",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif









@class BOSService;

/// An in-memory cache of a RESTful resource, plus information about the status of network requests related to it.
/// This class answers three basic questions about a resource:
/// <ul>
///   <li>
///     What is the latest data for the resource this device has retrieved, if any?
///   </li>
///   <li>
///     Did the last attempt to load it result in an error?
///   </li>
///   <li>
///     Is there a request in progress?
///   </li>
/// </ul>
/// …and allows multiple observer to register to be notified whenever the answers to any of these
/// questions changes.
SWIFT_CLASS_NAMED("Resource")
@interface BOSResource : NSObject
/// The API to which this resource belongs. Provides configuration defaults and instance uniqueness.
@property (nonatomic, readonly, strong) BOSService * _Nonnull service;
/// The canoncial URL of this resource.
@property (nonatomic, readonly, copy) NSURL * _Nonnull url;
/// The time of the most recent update to either <code>latestData</code> or <code>latestError</code>.
@property (nonatomic, readonly) NSTimeInterval timestamp;
/// True if any load requests (i.e. from calls to <code>load(...)</code> and <code>loadIfNeeded()</code>)
/// for this resource are in progress.
@property (nonatomic, readonly) BOOL isLoading;
/// True if any requests for this resource are in progress.
@property (nonatomic, readonly) BOOL isRequesting;
/// True if the resource’s local state is up to date according to staleness configuration.
/// “Up to date” means that either:
/// <ul>
///   <li>
///     the resource has data (i.e. <code>latestData</code> is not nil),
///   </li>
///   <li>
///     the last request succeeded (i.e. <code>latestError</code> <em>is</em> nil), and
///   </li>
///   <li>
///     the timestamp on <code>latestData</code> is more recent than <code>expirationTime</code> seconds ago,
///   </li>
/// </ul>
/// …or:
/// <ul>
///   <li>
///     the last request failed (i.e. <code>latestError</code> is not nil), and
///   </li>
///   <li>
///     the timestamp on <code>latestError</code> is more recent than <code>retryTime</code> seconds ago.
///   </li>
/// </ul>
@property (nonatomic, readonly) BOOL isUpToDate;
/// If this resource has no observers, cancels all <code>loadRequests</code>.
- (void)cancelLoadIfUnobserved;
/// Convenience to call <code>cancelLoadIfUnobserved()</code> after a delay. Useful for situations such as table view scrolling
/// where views are being rapidly discarded and recreated, and you no longer need the resource, but want to give other
/// views a chance to express interest in it before canceling any requests.
/// The <code>callback</code> is called aftrer the given delay, regardless of whether the request was cancelled.
- (void)cancelLoadIfUnobservedAfterDelay:(NSTimeInterval)delay then:(void (^ _Nonnull)(void))callback;
/// Convenience method to replace the <code>content</code> of <code>latestData</code> without altering the content type or other headers.
/// If this resource has no content, this method sets the content type to <code>application/binary</code>.
- (void)overrideLocalContentWith:(id _Nonnull)content;
/// Forces the next call to <code>loadIfNeeded()</code> to trigger a request, even if the current content is fresh.
/// Leaves the current values of <code>latestData</code> and <code>latestError</code> intact (including their timestamps).
/// Use this if you know the current content is stale, but don’t want to trigger a network request right away.
/// Any update to <code>latestData</code> or <code>latestError</code> — including a call to <code>overrideLocalData(...)</code> or
/// <code>overrideLocalContent(...)</code> — clears the invalidation.
/// seealso:
/// <code>wipe()</code>
- (void)invalidate;
/// Resets this resource to its pristine state, as if newly created.
/// <ul>
///   <li>
///     Sets <code>latestData</code> to nil.
///   </li>
///   <li>
///     Sets <code>latestError</code> to nil.
///   </li>
///   <li>
///     Cancels all resource requests in progress.
///   </li>
///   <li>
///     Triggers a cache fetch if there is a persistent cache configured for this resource.
///   </li>
/// </ul>
/// Observers receive a <code>newData(.wipe)</code> event. Requests in progress call completion hooks with a cancellation error.
/// seealso:
/// <code>invalidate()</code>
- (void)wipe;
/// :nodoc:
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end









@class BOSRequest;

@interface BOSResource (SWIFT_EXTENSION(Siesta))
- (BOSRequest * _Nonnull)load SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nullable)loadIfNeeded SWIFT_WARN_UNUSED_RESULT;
@end

@protocol BOSResourceObserver;

@interface BOSResource (SWIFT_EXTENSION(Siesta))
- (nonnull instancetype)addObserver:(id <BOSResourceObserver> _Nonnull)observerAndOwner SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)addObserver:(id <BOSResourceObserver> _Nonnull)objcObserver owner:(id _Nonnull)owner SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)addObserverWithOwner:(id _Nonnull)owner callback:(void (^ _Nonnull)(BOSResource * _Nonnull, NSString * _Nonnull))block SWIFT_WARN_UNUSED_RESULT;
@end


@interface BOSResource (SWIFT_EXTENSION(Siesta))
/// Returns the resource with the given string appended to the path of this resource’s URL, with a joining slash
/// inserted if necessary.
/// Use this method for hierarchical resource navigation. The typical use case is constructing a resource URL from
/// path components and IDs:
/// \code
/// let resource = service.resource("/widgets")
/// resource.child("123").child("details")
///   //→ /widgets/123/details
///
/// \endcodeThis method <em>always</em> returns a subpath of the receiving resource. It does not apply any special
/// interpretation to strings such <code>./</code>, <code>//</code> or <code>?</code> that have significance in other URL-related
/// situations. Special characters are escaped when necessary, and otherwise ignored. See
/// <a href="https://bustoutsolutions.github.io/siesta/specs/#ResourcePathsSpec"><code>ResourcePathsSpec</code></a>
/// for details.
/// seealso:
/// <code>relative(_:)</code>
- (BOSResource * _Nonnull)child:(NSString * _Nonnull)subpath SWIFT_WARN_UNUSED_RESULT;
/// Returns the resource with the given URL, using this resource’s URL as the base if it is a relative URL.
/// This method interprets strings such as <code>.</code>, <code>..</code>, and a leading <code>/</code> or <code>//</code> as relative URLs. It resolves its
/// parameter much like an <code>href</code> attribute in an HTML document. Refer to
/// <a href="https://bustoutsolutions.github.io/siesta/specs/#ResourcePathsSpec"><code>ResourcePathsSpec</code></a>
/// for details.
/// seealso:
///
/// <ul>
///   <li>
///     <code>optionalRelative(_:)</code>
///   </li>
///   <li>
///     <code>child(_:)</code>
///   </li>
/// </ul>
- (BOSResource * _Nonnull)relative:(NSString * _Nonnull)href SWIFT_WARN_UNUSED_RESULT;
/// Returns <code>relative(href)</code> if <code>href</code> is present, and nil if <code>href</code> is nil.
/// This convenience method is useful for resolving URLs returned as part of a JSON response body:
/// \code
/// let href = resource.jsonDict["owner"] as? String  // href is an optional
/// if let ownerResource = resource.optionalRelative(href) {
///   ...
/// }
///
/// \endcode
- (BOSResource * _Nullable)optionalRelative:(NSString * _Nullable)href SWIFT_WARN_UNUSED_RESULT;
/// Returns this resource with the given parameter added or changed in the query string.
/// If <code>value</code> is an empty string, the parameter goes in the query string with no value (e.g. <code>?foo</code>).
/// If <code>value</code> is nil, the parameter is removed.
/// There is no support for parameters with an equal sign but an empty value (e.g. <code>?foo=</code>).
/// There is also no support for repeated keys in the query string (e.g. <code>?foo=1&foo=2</code>).
/// If you need to circumvent either of these restrictions, you can create the query string yourself and pass
/// it to <code>relative(_:)</code> instead of using <code>withParam(_:_:)</code>.
/// Note that <code>Service</code> gives out unique <code>Resource</code> instances according to the full URL in string form, and thus
/// considers query string parameter order significant. Therefore, to ensure that you get the same <code>Resource</code>
/// instance no matter the order in which you specify parameters, <code>withParam(_:_:)</code> sorts all parameters by name.
/// Note that <em>only</em> <code>withParam(_:_:)</code> does this sorting; if you use other methods to create query strings, it is
/// up to you to canonicalize your parameter order.
- (BOSResource * _Nonnull)withParam:(NSString * _Nonnull)name value:(NSString * _Nullable)value SWIFT_WARN_UNUSED_RESULT;
@end








@interface BOSResource (SWIFT_EXTENSION(Siesta))
/// Removes all observers owned by the given object.
- (void)removeObserversOwnedBy:(id _Nullable)owner;
@end

@class NSMutableURLRequest;

@interface BOSResource (SWIFT_EXTENSION(Siesta))
- (BOSRequest * _Nonnull)requestWithMethod:(NSString * _Nonnull)method requestMutation:(void (^ _Nullable)(NSMutableURLRequest * _Nonnull))requestMutation SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)requestWithMethod:(NSString * _Nonnull)method SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)requestWithMethod:(NSString * _Nonnull)method data:(NSData * _Nonnull)data contentType:(NSString * _Nonnull)contentType requestMutation:(void (^ _Nullable)(NSMutableURLRequest * _Nonnull))requestMutation SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)requestWithMethod:(NSString * _Nonnull)method text:(NSString * _Nonnull)text SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)requestWithMethod:(NSString * _Nonnull)method text:(NSString * _Nonnull)text contentType:(NSString * _Nonnull)contentType encoding:(NSUInteger)encoding requestMutation:(void (^ _Nullable)(NSMutableURLRequest * _Nonnull))requestMutation SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)requestWithMethod:(NSString * _Nonnull)method json:(NSObject * _Nullable)json SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)requestWithMethod:(NSString * _Nonnull)method json:(NSObject * _Nullable)json contentType:(NSString * _Nonnull)contentType requestMutation:(void (^ _Nullable)(NSMutableURLRequest * _Nonnull))requestMutation SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)requestWithMethod:(NSString * _Nonnull)method urlEncoded:(NSDictionary<NSString *, NSString *> * _Nonnull)params requestMutation:(void (^ _Nullable)(NSMutableURLRequest * _Nonnull))requestMutation SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)loadUsingRequest:(BOSRequest * _Nonnull)req SWIFT_WARN_UNUSED_RESULT;
@end

@class BOSEntity;
@class BOSError;

@interface BOSResource (SWIFT_EXTENSION(Siesta))
@property (nonatomic, readonly, strong) BOSEntity * _Nullable latestData;
@property (nonatomic, readonly, strong) BOSError * _Nullable latestError;
@property (nonatomic, readonly, strong) NSDictionary * _Nonnull jsonDict;
@property (nonatomic, readonly, strong) NSArray * _Nonnull jsonArray;
@property (nonatomic, readonly, copy) NSString * _Nonnull text;
- (void)overrideLocalData:(BOSEntity * _Nonnull)entity;
@end


/// A set of logically connected RESTful resources. Resources within a service share caching, configuration, and a
/// “same URL → same resource” uniqueness guarantee.
/// You will typically create a separate instance of <code>Service</code> for each REST API you use. You can either subclass
/// <code>Service</code> or encapsulte it inside a wrapper. Regardless, to reap the benefits of Siesta, you’ll want to ensure that
/// all the observers of an API share a single instance.
/// You can optionally specify a <code>baseURL</code>, which allows you to get endpoints by path: <code>service.resource("/foo")</code>.
/// Specifying a <code>baseURL</code> does <em>not</em> limit the service only to subpaths of that URL. Its one and only purpose is to be
/// the starting point for <code>resource(_:)</code>.
/// Note that <code>baseURL</code> is only a convenience, and is optional.
/// If you want to group multiple base URLs in a single <code>Service</code> instance, use <code>resource(baseURL:path:)</code>.
/// If you want to feed your service arbitrary URLs with no common root, use <code>resource(absoluteURL:)</code>.
SWIFT_CLASS_NAMED("Service")
@interface BOSService : NSObject
/// The root URL of the API. If nil, then <code>resource(_:)</code> will only accept absolute URLs.
@property (nonatomic, readonly, copy) NSURL * _Nullable baseURL;
/// Returns the unique resource with the given path appended to the path component of <code>baseURL</code>.
/// A leading slash is optional, and has no effect:
/// \code
/// service.resource("users")   // same
/// service.resource("/users")  // thing
///
/// \endcodenote:
///
/// The <code>path</code> parameter is simply appended to <code>baseURL</code>’s path, and is <em>never</em> interpreted as a URL. Strings
/// such as <code>..</code>, <code>//</code>, <code>?</code>, and <code>https:</code> have no special meaning; they go directly into the resulting
/// resource’s path, with escaping if necessary.
/// If you want to pass an absolute URL, use <code>resource(absoluteURL:)</code>.
/// If you want to pass a relative URL to be resolved against <code>baseURL</code>, use <code>resource("/").relative(relativeURL)</code>.
- (BOSResource * _Nonnull)resource:(NSString * _Nonnull)path SWIFT_WARN_UNUSED_RESULT;
/// Signals that all resources need to recompute their configuration next time they need it.
/// Because the <code>configure(...)</code> methods accept an arbitrary closure, it is possible that the results of
/// that closure could change over time. However, resources cache their configuration after it is computed. Therefore,
/// if you do anything that would change the result of a configuration closure, you must call
/// <code>invalidateConfiguration()</code> in order for the changes to take effect.
/// <em>《insert your functional programming purist rant here if you so desire》</em>
/// Note that you do <em>not</em> need to call this method after calling any of the <code>configure(...)</code> methods.
/// You only need to call it if one of the previously passed closures will now behave differently.
/// For example, to make a header track the value of a modifiable property:
/// \code
/// var flavor: String? {
///   didSet { invalidateConfiguration() }
/// }
///
/// init() {
///   super.init(baseURL: "https://api.github.com")
///   configure {
///     $0.headers["Flavor-of-the-month"] = self.flavor  // NB: use weak self if service isn’t a singleton
///   }
/// }
///
/// \endcodeNote that this method does <em>not</em> immediately recompute all existing configurations. This is an inexpensive call.
/// Configurations are computed lazily, and the (still relatively low) performance impact of recomputation is spread
/// over subsequent resource interactions.
- (void)invalidateConfiguration;
/// Wipes the state of all this service’s resources. Typically used to handle logout.
/// Applies to resources matching the predicate, or all resources by default.
- (void)wipeResourcesMatching:(SWIFT_NOESCAPE BOOL (^ _Nonnull)(BOSResource * _Nonnull))predicate;
/// Wipes the state of a subset of this service’s resources, matching based on URLs (instead of <code>Resource</code> instances).
/// Useful for making shared predicates that you can pass to both <code>configure(...)</code> and this method.
- (void)wipeResourcesWithURLsMatching:(SWIFT_NOESCAPE BOOL (^ _Nonnull)(NSURL * _Nonnull))predicate;
/// Soft limit on the number of resources cached in memory. If the internal cache size exceeds this limit, Siesta
/// flushes all unused resources. Note that any resources still in use — i.e. retained outside of Siesta — will remain
/// in the cache, no matter how many there are.
@property (nonatomic) NSInteger cachedResourceCountLimit;
/// Switches to weak references for all <code>Resource</code> instances cached by this service. This immediately releases any
/// resources not currently in use.
/// Siesta automatically flushes unused resources whenever:
/// <ul>
///   <li>
///     the number of cached resources exceeds <code>cachedResourceCountLimit</code> or
///   </li>
///   <li>
///     there is a low memory event (iOS and tvOS only).
///   </li>
/// </ul>
/// It is unusual for apps to call this method directly. You might need it if you want to first fiddle with Siesta
/// resources yourself during a low memory, then tell Siesta to release them when you are done. You might also call it
/// preemptively before a memory-intensive operation, to prevent memory churn.
- (void)flushUnusedResources;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end




@interface BOSService (SWIFT_EXTENSION(Siesta))
- (BOSResource * _Nonnull)resourceWithAbsoluteURL:(NSURL * _Nullable)url SWIFT_WARN_UNUSED_RESULT;
- (BOSResource * _Nonnull)resourceWithAbsoluteURLString:(NSString * _Nullable)url SWIFT_WARN_UNUSED_RESULT;
@end






SWIFT_CLASS_NAMED("_objc_Entity")
@interface BOSEntity : NSObject
@property (nonatomic, strong) id _Nonnull content;
@property (nonatomic, copy) NSString * _Nonnull contentType;
@property (nonatomic, copy) NSString * _Nullable charset;
@property (nonatomic, copy) NSString * _Nullable etag;
@property (nonatomic, readonly) NSTimeInterval timestamp;
- (nonnull instancetype)initWithContent:(id _Nonnull)content contentType:(NSString * _Nonnull)contentType headers:(NSDictionary<NSString *, NSString *> * _Nonnull)headers OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithContent:(id _Nonnull)content contentType:(NSString * _Nonnull)contentType;
- (NSString * _Nullable)header:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class NSError;

SWIFT_CLASS_NAMED("_objc_Error")
@interface BOSError : NSObject
@property (nonatomic) NSInteger httpStatusCode;
@property (nonatomic, strong) NSError * _Nullable cause;
@property (nonatomic, copy) NSString * _Nonnull userMessage;
@property (nonatomic, strong) BOSEntity * _Nullable entity;
@property (nonatomic, readonly) NSTimeInterval timestamp;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end




SWIFT_CLASS_NAMED("_objc_Request")
@interface BOSRequest : NSObject
- (BOSRequest * _Nonnull)onCompletion:(void (^ _Nonnull)(BOSEntity * _Nullable, BOSError * _Nullable))objcCallback SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)onSuccess:(void (^ _Nonnull)(BOSEntity * _Nonnull))objcCallback SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)onNewData:(void (^ _Nonnull)(BOSEntity * _Nonnull))objcCallback SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)onNotModified:(void (^ _Nonnull)(void))objcCallback SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)onFailure:(void (^ _Nonnull)(BOSError * _Nonnull))objcCallback SWIFT_WARN_UNUSED_RESULT;
- (BOSRequest * _Nonnull)onProgress:(void (^ _Nonnull)(float))objcCallback SWIFT_WARN_UNUSED_RESULT;
- (void)cancel;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL_NAMED("_objc_ResourceObserver")
@protocol BOSResourceObserver
- (void)resourceChanged:(BOSResource * _Nonnull)resource event:(NSString * _Nonnull)event;
@optional
- (void)resourceRequestProgress:(BOSResource * _Nonnull)resource progress:(double)progress;
- (void)stoppedObservingResource:(BOSResource * _Nonnull)resource;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
