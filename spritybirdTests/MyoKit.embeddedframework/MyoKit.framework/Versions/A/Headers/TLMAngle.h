//
//  TLMAngle.h
//  MyoKit
//
//  Copyright (C) 2013 Thalmic Labs Inc.
//  Confidential and not for redistribution. See LICENSE.txt.
//

#import <Foundation/Foundation.h>

/** A representation of an angle in either degrees and radians */
@interface TLMAngle : NSObject <NSCopying>

/** The angle represented in degrees */
@property (nonatomic, readonly) double degrees;

/** The angle represented in radians */
@property (nonatomic, readonly) double radians;

- (id)init __attribute__((unavailable("init not available, use either initWithRadians or initWithDegrees")));

/**
   Initialize angle with radians
   @param aRadian
 */
- (id)initWithRadians:(double)aRadian;

/**
   Initialize angle with degrees
   @param aDegree
 */
- (id)initWithDegrees:(double)aDegree;

/**
   Initialize angle with another angle
   @param anAngle
 */
- (id)initWithAngle:(TLMAngle *)anAngle;

@end
