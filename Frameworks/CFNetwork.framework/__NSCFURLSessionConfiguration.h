/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSArray, NSDictionary, NSHTTPCookieStorage, NSString, NSURLCache, NSURLCredentialStorage;

@interface __NSCFURLSessionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    struct _CFHSTSPolicy { } *_HSTSPolicy;
    NSDictionary *_HTTPAdditionalHeaders;
    unsigned int _HTTPCookieAcceptPolicy;
    int _HTTPMaximumConnectionsPerHost;
    BOOL _HTTPShouldSetCookies;
    BOOL _HTTPShouldUsePipelining;
    int _TLSMaximumSupportedProtocol;
    int _TLSMinimumSupportedProtocol;
    NSDictionary *__cfurlConnectionProperties;
    NSArray *__contentDispHeadEncFallback;
    NSHTTPCookieStorage *__cookieStorage;
    BOOL __cookieStorageSet;
    NSURLCredentialStorage *__credStorage;
    BOOL __credStorageSet;
    BOOL __preventsIdleSleep;
    NSDictionary *__socketStreamProperties;
    BOOL __startSynchronously;
    NSURLCache *__urlCache;
    BOOL __urlCacheSet;
    BOOL __usePipeliningHeuristics;
    BOOL _allowsCellularAccess;
    BOOL _backgroundSession;
    double _connectionCacheCellPurgeTimeout;
    double _connectionCachePurgeTimeout;
    NSDictionary *_connectionProxyDictionary;
    BOOL _discretionary;
    NSString *_disposition;
    NSString *_identifier;
    struct __CFURLStorageSession { } *_legacyStorageSystem;
    unsigned int _networkServiceType;
    NSArray *_protocolClasses;
    unsigned int _requestCachePolicy;
    BOOL _sessionSendsLaunchEvents;
    BOOL _skip_download_unlink;
    BOOL _tasks_created_suspended;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
}

@property(retain) struct _CFHSTSPolicy { }* HSTSPolicy;
@property(copy) NSDictionary * HTTPAdditionalHeaders;
@property unsigned int HTTPCookieAcceptPolicy;
@property(getter=HTTPCookieStorage,setter=setHTTPCookieStorage:,retain) NSHTTPCookieStorage * HTTPCookieStorage;
@property int HTTPMaximumConnectionsPerHost;
@property BOOL HTTPShouldSetCookies;
@property BOOL HTTPShouldUsePipelining;
@property int TLSMaximumSupportedProtocol;
@property int TLSMinimumSupportedProtocol;
@property(getter=URLCache,setter=setURLCache:,retain) NSURLCache * URLCache;
@property(getter=URLCredentialStorage,setter=setURLCredentialStorage:,retain) NSURLCredentialStorage * URLCredentialStorage;
@property(copy) NSDictionary * _cfurlConnectionProperties;
@property(copy) NSArray * _contentDispHeadEncFallback;
@property(retain) NSHTTPCookieStorage * _cookieStorage;
@property BOOL _cookieStorageSet;
@property(retain) NSURLCredentialStorage * _credStorage;
@property BOOL _credStorageSet;
@property BOOL _preventsIdleSleep;
@property(copy) NSDictionary * _socketStreamProperties;
@property BOOL _startSynchronously;
@property(retain) NSURLCache * _urlCache;
@property BOOL _urlCacheSet;
@property BOOL _usePipeliningHeuristics;
@property BOOL allowsCellularAccess;
@property(getter=isBackgroundSession) BOOL backgroundSession;
@property double connectionCacheCellPurgeTimeout;
@property double connectionCachePurgeTimeout;
@property(copy) NSDictionary * connectionProxyDictionary;
@property(getter=isDiscretionary) BOOL discretionary;
@property NSString * disposition;
@property(copy) NSString * identifier;
@property unsigned int networkServiceType;
@property(copy) NSArray * protocolClasses;
@property unsigned int requestCachePolicy;
@property BOOL sessionSendsLaunchEvents;
@property BOOL skip_download_unlink;
@property BOOL tasks_created_suspended;
@property double timeoutIntervalForRequest;
@property double timeoutIntervalForResource;

+ (id)backgroundSessionConfiguration:(id)arg1;
+ (id)defaultSessionConfiguration;
+ (id)ephemeralSessionConfiguration;
+ (BOOL)supportsSecureCoding;

- (struct _CFHSTSPolicy { }*)HSTSPolicy;
- (id)HTTPAdditionalHeaders;
- (unsigned int)HTTPCookieAcceptPolicy;
- (id)HTTPCookieStorage;
- (int)HTTPMaximumConnectionsPerHost;
- (BOOL)HTTPShouldSetCookies;
- (BOOL)HTTPShouldUsePipelining;
- (int)TLSMaximumSupportedProtocol;
- (int)TLSMinimumSupportedProtocol;
- (id)URLCache;
- (id)URLCredentialStorage;
- (id)_cfurlConnectionProperties;
- (id)_contentDispHeadEncFallback;
- (id)_cookieStorage;
- (BOOL)_cookieStorageSet;
- (id)_credStorage;
- (BOOL)_credStorageSet;
- (BOOL)_preventsIdleSleep;
- (id)_socketStreamProperties;
- (BOOL)_startSynchronously;
- (id)_urlCache;
- (BOOL)_urlCacheSet;
- (BOOL)_usePipeliningHeuristics;
- (BOOL)allowsCellularAccess;
- (double)connectionCacheCellPurgeTimeout;
- (double)connectionCachePurgeTimeout;
- (id)connectionProxyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)disposition;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisposition:(id)arg1;
- (BOOL)isBackgroundSession;
- (BOOL)isDiscretionary;
- (unsigned int)networkServiceType;
- (id)protocolClasses;
- (unsigned int)requestCachePolicy;
- (BOOL)sessionSendsLaunchEvents;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setBackgroundSession:(BOOL)arg1;
- (void)setConnectionCacheCellPurgeTimeout:(double)arg1;
- (void)setConnectionCachePurgeTimeout:(double)arg1;
- (void)setConnectionProxyDictionary:(id)arg1;
- (void)setDiscretionary:(BOOL)arg1;
- (void)setDisposition:(id)arg1;
- (void)setHSTSPolicy:(struct _CFHSTSPolicy { }*)arg1;
- (void)setHTTPAdditionalHeaders:(id)arg1;
- (void)setHTTPCookieAcceptPolicy:(unsigned int)arg1;
- (void)setHTTPCookieStorage:(id)arg1;
- (void)setHTTPMaximumConnectionsPerHost:(int)arg1;
- (void)setHTTPShouldSetCookies:(BOOL)arg1;
- (void)setHTTPShouldUsePipelining:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNetworkServiceType:(unsigned int)arg1;
- (void)setProtocolClasses:(id)arg1;
- (void)setRequestCachePolicy:(unsigned int)arg1;
- (void)setSessionSendsLaunchEvents:(BOOL)arg1;
- (void)setSkip_download_unlink:(BOOL)arg1;
- (void)setTLSMaximumSupportedProtocol:(int)arg1;
- (void)setTLSMinimumSupportedProtocol:(int)arg1;
- (void)setTasks_created_suspended:(BOOL)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setURLCache:(id)arg1;
- (void)setURLCredentialStorage:(id)arg1;
- (void)set_cfurlConnectionProperties:(id)arg1;
- (void)set_contentDispHeadEncFallback:(id)arg1;
- (void)set_cookieStorage:(id)arg1;
- (void)set_cookieStorageSet:(BOOL)arg1;
- (void)set_credStorage:(id)arg1;
- (void)set_credStorageSet:(BOOL)arg1;
- (void)set_preventsIdleSleep:(BOOL)arg1;
- (void)set_socketStreamProperties:(id)arg1;
- (void)set_startSynchronously:(BOOL)arg1;
- (void)set_urlCache:(id)arg1;
- (void)set_urlCacheSet:(BOOL)arg1;
- (void)set_usePipeliningHeuristics:(BOOL)arg1;
- (BOOL)skip_download_unlink;
- (BOOL)tasks_created_suspended;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;

@end
