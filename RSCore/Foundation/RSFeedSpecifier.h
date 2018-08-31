//
//  RSFeedSpecifier.h
//  RSCoreTests
//
//  Created by Brent Simmons on 9/4/10.
//  Copyright 2010 NewsGator Technologies, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RSPluginProtocols.h"
#import "RSRefreshProtocols.h"


/*Main thread only. Meant to be temporary objects, for use in plugins.*/

@class RSFeed;


@interface RSFeedSpecifier : NSObject <RSFeedSpecifier> {
@private
    NSString *name;
    NSURL *URL;
    NSURL *homePageURL;
    id<RSAccount> account;
}

+ (id<RSFeedSpecifier>)feedSpecifierWithName:(NSString *)feedName feedURL:(NSURL *)feedURL feedHomePageURL:(NSURL *)feedHomePageURL account:(id<RSAccount>)anAccount;
+ (id<RSFeedSpecifier>)feedSpecifierWithFeed:(RSFeed *)aFeed;


@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSURL *URL;
@property (nonatomic, strong, readonly) NSURL *homePageURL;
@property (nonatomic, strong, readonly) id<RSAccount> account;


@end
