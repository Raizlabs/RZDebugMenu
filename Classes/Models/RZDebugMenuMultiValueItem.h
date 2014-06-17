//
//  RZDebugMenuMultiValueItem.h
//  RZDebugMenu
//
//  Created by Clayton Rieck on 6/6/14.
//  Copyright (c) 2014 Raizlabs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RZDebugMenuSettingsItem.h"

@interface RZDebugMenuMultiValueItem : RZDebugMenuSettingsItem

@property (strong, nonatomic, readonly) NSNumber *disclosureTableViewCellDefaultValue;
@property (strong, nonatomic, readonly) NSArray *selectionItems;

- (id)initWithTitle:(NSString *)title defaultValue:(NSNumber *)value andSelectionItems:(NSArray *)selectionItems;

@end