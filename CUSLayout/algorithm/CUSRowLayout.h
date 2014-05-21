/**
 @header CUSRowLayout.h
 @abstract
 @code
 
 @link
 https://github.com/JJMM/CUSLayout
 @version 1.00 2013/4/9 Creation
 @copyright Copyright (c) 2013 zhangyu. All rights reserved.
 */

#import "CUSLayoutFrame.h"
#import "CUSLayoutConstant.h"

/**
 @class CUSLinnerLayout
 @abstract
行列布局，子控件以行或列的形式布局，可设置折行、均匀等复杂操作
 */
@interface CUSRowLayout : CUSLayoutFrame
//填充方向：默认水平方向
@property (nonatomic,assign) CUSLayoutType type;
//子控件间距
@property (nonatomic,assign) CGFloat spacing;
//折行：当剩余位置无法放置下个控件时，折到下行显示，默认折行(YES)
@property (nonatomic,assign) BOOL wrap;
//填充：对水平方向类型来说，设置填充后，所有子控件垂直方向充满容器，默认不填充(NO)
@property (nonatomic,assign) BOOL fill;
//居中，暂未实现
@property (nonatomic,assign) BOOL pack;
//间距适应，平分控件的间距，使控件看上去均匀
@property (nonatomic,assign) BOOL justify;

@end