//
//  NNWArticleTheme.h
//  nnw
//
//  Created by Brent Simmons on 12/19/10.
//  Copyright 2010 NewsGator Technologies, Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface NNWArticleTheme : NSObject {
@private
    BOOL shouldScrollFullPage;
    NSString *cssFilePath;
    NSString *emptyCSSFilePath;
    NSString *folderPath;
    NSString *htmlTemplate;
    NSString *nameForDisplay;
}


- (id)initWithFolderPath:(NSString *)aFolderPath;


@property (nonatomic, assign, readonly) BOOL shouldScrollFullPage; /*Themes that have fixed elements should not scroll a full page.*/
@property (nonatomic, strong, readonly) NSString *cssFilePath;
@property (nonatomic, strong, readonly) NSString *emptyCSSFilePath; //for when there's no content; returns cssFilePath if doesn't exist
@property (nonatomic, strong, readonly) NSString *folderPath;
@property (nonatomic, strong, readonly) NSString *htmlTemplate;
@property (nonatomic, strong, readonly) NSString *nameForDisplay;


@end
