//
//  MWTrendChartViewController.h
//  MWBaseLib
//
//  Created by Lars Beier on 08.01.16.
//  Copyright © 2016 Monkey Works. All rights reserved.
//

#import "MWViewController.h"
#import "MWTrendView.h"
#import "DataItemValueMO.h"
#import "MWTrendViewCustomXAxisValueFormatter.h"
#import "MWTrendViewCustomNumberFormatter.h"

@interface MWTrendViewController : MWViewController

typedef NS_ENUM(NSUInteger, MWAxisDependency) {
    MWAxisDependencyNone = 0,
    MWAxisDependencyLeft = 1,
    MWAxisDependencyRight = 2
};

typedef NS_ENUM(NSUInteger, MWAxisType) {
    MWAxisTypeYAxisLeft = 1,
    MWAxisTypeYAxisRight = 2,
    MWAxisTypeXAxis = 3
};
@property (nonatomic) MWTrendView *trendView;
@property (nonatomic) LineChartView *chartView;

/**
 *  Add a individual dataset to the chart view
 *
 *  @param label          Label to describe and find the specific data set to make changes later on
 *  @param axisDependency For which y-axis is this data set specified (left / right)
 *  @param color          The color the graph is rendered with
 *  @param lineWidth      The line width of the graph
 */
- (void)addDataSetWithLabel:(NSString *)label forYAxis:(MWAxisDependency)axisDependency color:(UIColor *)color lineWidth:(double)lineWidth;

/**
 *  Registers the signal from which data changes come
 *
 *  @param label      The label to find the specific dataset
 *  @param signalName The signal name which specifies the subscription with data changes
 */
- (void)registerDataSetWithLabel:(NSString *)label forSignal:(NSString *)signalName;

/**
 *  Set up the x axis
 *
 *  @param axisColor The color to render the text and axis with
 *  @param axisLineWidth The width of the axis line
 *  @param range The time frame to render the graph
 *  @param drawGridLinesEnabled Wheather the grid should be rendered or not
 */
- (void)setXAxisWithColor:(UIColor *)axisColor
            axisLineWidth:(NSNumber *)axisLineWidth
                    range:(NSNumber *)range
              gridEnabled:(BOOL)drawGridLinesEnabled;

/**
 *  Set up the individual y axis
 *
 *  @param axisType The type of the axis to identify it (MWAxisTypeYAxisLeft, MWAxisTypeYAxisRight, MWAxisTypeXAxis)
 *  @param axisColor The color to render the text and axis with
 *  @param axisScale The number of labels to show
 *  @param axisLineWidth The width of the axis line
 *  @param rangeMin The maximum range value
 *  @param rangeMax The minimum range value
 *  @param drawGridLinesEnabled Wheather the grid should be rendered or not
 */
- (void)setYAxis:(MWAxisType)axisType
       withColor:(UIColor *)axisColor
       axisScale:(NSNumber *)scale
   axisLineWidth:(NSNumber *)axisLineWidth
        rangeMin:(NSNumber *)rangeMin
        rangeMax:(NSNumber *)rangeMax
     gridEnabled:(BOOL)drawGridLinesEnabled;

/**
 *  Removes the specific dataset from the trend with the given signal name.
 *
 *  @param signalName The name of the signal by the indicator
 */
- (void)removeDataSetForSignal:(NSString *)signalName;

/**
 *  Add a dataset with the given signal name
 *
 *  @param signalName     The signalName to identify the dataset and dataitem
 *  @param label          The label which is just for the chart info
 *  @param axisDependency Defines wheather the dataset is attached to the left or right axis
 *  @param lineColor      The Color of the graph
 *  @param lineWidth      The line width of the graph
 */
- (void)addDataSetForSignal:(NSString *)signalName
                  withLabel:(NSString *)label
             axisDependency:(MWAxisDependency)axisDependency
                  lineColor:(UIColor *)lineColor
                  lineWidth:(NSNumber *)lineWidth;

/**
 *  Public method to change line color of specific dataset
 *
 *  @param lineColor   The UI Color to apply on given dataset
 *  @param label The name of the dataset
 */
- (void)setLineColor:(UIColor *)lineColor ofDataSetWithSignalName:(NSString *)signalName;

/**
 *  Change the label of the given data set
 *
 *  @param label       The new label of the DataSet
 *  @param label The data set identifier
 */
- (void)setLabel:(NSString *)newLabel forDataSetWithSignalName:(NSString *)signalName;

/**
 *  Change axis dependency for DataSet
 *
 *  @param axisDependency The new axis dependency (None, Left, Right)
 *  @param label          The label of the DataSet used to find the DS
 *  @param signal         The signal of the DataSet used to create a new DS
 *  @param lineColor      The line Color of the Dataset
 */
- (void)changeAxisDependencyTo:(MWAxisDependency)axisDependency ofDataSetWithLabel:(NSString *)label forSignal:(NSString *)signal andLineColor:(UIColor *)lineColor;

/**
 *  Render the actual data on the TrendView
 *
 *  @param startTimestamp This is the start point of the time range
 *  @param endTimestamp   This is the end point of the time range
 */
- (void)renderGraphWithDataFrom:(NSNumber *)startTimestamp to:(NSNumber *)endTimestamp;
@end
