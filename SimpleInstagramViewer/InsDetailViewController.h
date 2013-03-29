//
//  InsDetailViewController.h
//  SimpleInstagramViewer
//
//  Created by Artem Zinoviev on 3/29/13.
//  Copyright (c) 2013 iSolo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InsDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
