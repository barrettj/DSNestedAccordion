#import <Foundation/Foundation.h>

@class DSCellPath;

@interface DSNestedAccordionHandler : NSObject <UITableViewDataSource, UITableViewDelegate>

@property(nonatomic, weak) UITableView *tableView;

- (void)reload;

- (void)closeOpenCells;

- (void)tableView:(UITableView *)tableView toggleAtIndexPath:(NSIndexPath *)indexPath;

- (NSInteger)noOfRowsInRootLevel;

- (NSInteger)tableView:(UITableView *)view noOfChildRowsForCellAtPath:(DSCellPath *)path;

- (UITableViewCell *)tableView:(UITableView *)view cellForPath:(DSCellPath *)path;

- (BOOL)tableView:(UITableView *)view didSelectRowAtDSCellPath:(DSCellPath *)path final:(BOOL)final;

@end
