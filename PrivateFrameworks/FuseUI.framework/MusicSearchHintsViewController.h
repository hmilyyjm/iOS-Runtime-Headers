/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSearchHintsViewController : UITableViewController <MusicClientContextConsuming> {
    BOOL  _appendRadioTabParameter;
    NSString * _baseHintsURLString;
    MusicClientContext * _clientContext;
    SKUICompletionList * _completionList;
    <MusicSearchHintsViewControllerDelegate> * _delegate;
    SSVLoadURLOperation * _loadOperation;
    NSOperationQueue * _operationQueue;
    UISearchBar * _searchBar;
}

@property (nonatomic) BOOL appendRadioTabParameter;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicSearchHintsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (BOOL)appendRadioTabParameter;
- (id)clientContext;
- (id)delegate;
- (id)initWithStyle:(int)arg1;
- (void)reloadData;
- (id)searchBar;
- (void)setAppendRadioTabParameter:(BOOL)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;

@end
