//
//  ViewController.h
//  Box2DTest
//
//  Created by Dimitrios Vlastaras on 2012-09-02.
//  Copyright (c) 2012 Dimitrios Vlastaras. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Box2D/Box2D.h>

@interface ViewController : UIViewController {
    b2World* world;
	NSTimer *tickTimer;
}

@end
