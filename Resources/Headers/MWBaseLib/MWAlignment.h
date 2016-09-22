//
//  MWAlignment.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 25.09.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	Describes the horizontal alignment
 */
typedef NS_ENUM(NSUInteger, MWAlignmentHorizontal){
    /**
     *	Left
     */
    MWAlignmentHorizontalLeft,
    /**
     *	Center
     */
    MWAlignmentHorizontalCenter,
    /**
     *	Right
     */
    MWAlignmentHorizontalRight
};

/**
 *	Describes the vertical alignment
 */
typedef NS_ENUM(NSUInteger, MWAlignmentVertical){
    /**
     *	Top
     */
    MWAlignmentVerticalTop,
    /**
     *	Middle
     */
    MWAlignmentVerticalMiddle,
    /**
     *	Bottom
     */
    MWAlignmentVerticalBottom
};

/**
 *	Struct to store horizontal and vertical alignment
 */
struct MWAlignment {
    MWAlignmentHorizontal horizontal;
    MWAlignmentVertical vertical;
};

