//
//  MovisaVideoViewController.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 11.05.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

#import "UIViewController+MWWidget.h"
#import "UIViewController+MWNamedElement.h"
#import "UIViewController+MWImageContainingWidget.h"

#import "MWImageResource.h"
#import "MWCameraImage.h"
#import "MWVideoView.h"
#import "MWViewController.h"

@interface MWVideoViewController : MWViewController <MWWidgetViewDelegate>

@property (nonatomic, retain) MWVideoView *videoView;
@property (nonatomic) BOOL fullscreen;

- (void)setVideoResource:(NSString *)videoResource withExtension:(NSString *)extension;

@end
