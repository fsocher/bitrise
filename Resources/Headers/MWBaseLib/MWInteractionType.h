//
//  MWEffect.h
//  MovisaBaseLib
//
//  Created by Maximilian Winkler on 28.09.15.
//  Copyright © 2015 Monkey Works. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	Describes the type of interaction
 */
typedef NS_ENUM(NSUInteger, MWInteractionType){
    /**
     *	Tap
     */
    MWInteractionTypeTap,
    /**
     *	Native double tap
     */
    MWInteractionTypeDoubleTap,
    /**
     *	Tap duration: 2 seconds
     */
    MWInteractionTypeLongTap,
    /**
     *	Must be implemented in subclass
     */
    MWInteractionTypeSubmit
};
