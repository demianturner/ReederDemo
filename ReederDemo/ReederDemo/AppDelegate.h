//
//  AppDelegate.h
//  ReederDemo
//
//  Created by Demian Turner on 13/03/2014.
//  Copyright (c) 2014 Seagull Systems. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

- (IBAction)didSelectSegment:(NSSegmentedControl *)segmentedControl;

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSView *contentHoldingView;

@end
