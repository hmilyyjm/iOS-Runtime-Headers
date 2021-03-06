/* Generated by RuntimeBrowser.
 */

@protocol RemoteUITableFooter <NSObject>

@required

- (id)initWithAttributes:(NSDictionary *)arg1;

@optional

- (float)footerHeightForWidth:(float)arg1 inTableView:(UITableView *)arg2;
- (float)footerHeightForWidth:(float)arg1 inView:(UIView *)arg2;
- (void)setDelegate:(id <RUITableFooterDelegate>)arg1;
- (void)setText:(NSString *)arg1 attributes:(NSDictionary *)arg2;

@end
