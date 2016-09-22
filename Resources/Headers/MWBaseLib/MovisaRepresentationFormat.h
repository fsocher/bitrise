//
//  MovisaRepresentationFormat.h
//  MobileViz
//
//  Created by Stefan Hennig on 11/26/12.
//
//

#import <Foundation/Foundation.h>

#import "MovisaScaledProperty.h"

typedef enum {
    FONT_DECORATION_NONE = 1,
    FONT_DECORATION_OVERLINE = 2,
    FONT_DECORATION_STRIKE_THROUGH = 3,
    FONT_DECORATION_UNDERLINE = 4
} FontDecorationConstant;

typedef enum {
    FONT_FACE_ARIAL = 1,
    FONT_FACE_COURIER = 2,
    FONT_FACE_COMIC = 3,
    FONT_FACE_DIDOT = 4,
    FONT_FACE_HELVETICA = 5,
    FONT_FACE_LUCIDA_GRANDE = 6,
    FONT_FACE_TAHOMA = 7,
    FONT_FACE_TIMES_NEW_ROMAN = 8,
    FONT_FACE_VERDANA = 9
} FontFaceConstant;

typedef enum {
    FONT_STYLE_ITALIC = 1,
    FONT_STYLE_NORMAL = 2
} FontStyleConstant;

typedef enum {
    FONT_WEIGHT_BOLD = 1,
    FONT_WEIGHT_LIGHT = 2,
    FONT_WEIGHT_MEDIUM = 3,
    FONT_WEIGHT_REGULAR = 4
} FontWeightConstant;

@interface MovisaRepresentationFormat : NSObject {
    FontDecorationConstant _fontDecoration;
    FontFaceConstant _fontFace;
    FontStyleConstant _fontStyle;
    FontWeightConstant _fontWeight;
    
    MovisaScaledProperty *_fontSize;
}

@property (nonatomic) FontDecorationConstant fontDecoration;
@property (nonatomic) FontFaceConstant fontFace;
@property (nonatomic) FontStyleConstant fontStyle;
@property (nonatomic) FontWeightConstant fontWeight;
@property (nonatomic, retain) MovisaScaledProperty *fontSize;

-(id)init;
-(id)initWithFontFace:(FontFaceConstant)fontFace fontSize:(MovisaScaledProperty *)fontSize  fontDecoration:(FontDecorationConstant) fontDecoration fontStyle:(FontStyleConstant)fontStyle fontWeight:(FontWeightConstant)fontWeight;

-(NSString *)fontFaceName;

@end
