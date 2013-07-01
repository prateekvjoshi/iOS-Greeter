//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Prateek Joshi on 6/26/13.
//  Copyright (c) 2013 Prateek Joshi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UITextField *textField;
- (IBAction)changeGreeting:(id)sender;
@property (copy, nonatomic) NSString *userName;
@end
