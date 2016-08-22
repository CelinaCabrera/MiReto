//
//  DetailViewController.h
//  Tarea
//
//  Created by Celina Cabrera Vera on 20/08/16.
//  Copyright © 2016 Celina Cabrera Vera. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

