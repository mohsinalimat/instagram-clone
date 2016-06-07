//
//  DataSource.h
//  instagram-clone
//
//  Created by Jordan Carlson on 6/1/16.
//  Copyright © 2016 savagej. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Media;

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

- (void) deleteMediaItem:(Media *)item;

@end
