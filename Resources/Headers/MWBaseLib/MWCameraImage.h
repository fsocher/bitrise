//
//  MovisaCameraImage.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 11.05.15.
//  Copyright (c) 2015 Monkey Works. All rights reserved.
//

#import "MWImageResource.h"

@interface MWCameraImage : MWImageResource

//Types: MOV, MP4, MPV, 3PG

- (NSString *)getUrlExtension;

@end
