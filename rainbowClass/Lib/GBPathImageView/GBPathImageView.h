//
//  GBPathImageView.h
//  GBControls
//
//  Created by Matteo Gobbi on 15/08/13.
//  Copyright (c) 2013 Matteo Gobbi. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    GBPathImageViewTypeCircle,
    GBPathImageViewTypeSquare
} GBPathImageViewType;


@interface GBPathImageView : UIImageView

@property (nonatomic) GBPathImageViewType pathType;
@property (nonatomic, strong) UIColor *borderColor;
@property (nonatomic, strong) UIColor *pathColor;
@property float pathWidth;
@property float borderWidth;


- (id)initWithFrame:(CGRect)frame
              image:(UIImage *)image;

- (id)initWithFrame:(CGRect)frame
              image:(UIImage *)image
           pathType:(GBPathImageViewType)pathType
          pathColor:(UIColor *)pathColor
        borderColor:(UIColor *)borderColor
          pathWidth:(float)pathWidth;

- (id)initWithFrame:(CGRect)frame
         urlNSURL:(NSURL *)url;


- (void)setURL:(NSURL *)url;
- (void)setImageNew:(UIImage *)image;// add by  dong

- (void)draw;

@end
