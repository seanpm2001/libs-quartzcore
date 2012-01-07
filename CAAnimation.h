
/* 
   CAAnimation.h

   Copyright (C) 2012 Free Software Foundation, Inc.

   Author: Amr Aboelela <amraboelela@gmail.com>
   Date: January 2011

   This file is part of QuartzCore.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; see the file COPYING.LIB.
   If not, see <http://www.gnu.org/licenses/> or write to the
   Free Software Foundation, 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
*/

#import "CAMediaTiming.h"

@interface CAAnimation : NSObject <CAMediaTiming>
{
}

@end

@interface CAPropertyAnimation : CAAnimation

+ (id)animationWithKeyPath:(NSString *)path;

@end

@interface CAKeyframeAnimation : CAPropertyAnimation

@property(copy) NSString* calculationMode;
@property(copy) NSArray* values;

@end

/* calculationMode constants */

NSString *const kCAAnimationDiscrete;

