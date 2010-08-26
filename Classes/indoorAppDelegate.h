//
//  indoorAppDelegate.h
//  indoor
//
//  Created by Avijit Paul on 8/26/10.
//  Copyright (c) 2010 Multimedia University. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface indoorAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;

    UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;


@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end

