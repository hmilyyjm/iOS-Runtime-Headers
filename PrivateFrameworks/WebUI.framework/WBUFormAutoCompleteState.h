/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <WBUFormAutoFillFrameHandle>, NSArray, NSDictionary, NSMutableDictionary, NSString, UIView<WBUFormAutoFillWebView>, WBUFormDataController;

@interface WBUFormAutoCompleteState : NSObject <UIActionSheetDelegate, WBUCreditCardCaptureViewControllerDelegate> {
    long long _action;
    id _creditCardCaptureCompletionHandler;
    WBUFormDataController *_dataController;
    NSDictionary *_formMetadata;
    unsigned long long _formType;
    NSDictionary *_formValues;
    NSMutableDictionary *_matchesByCompletion;
    NSArray *_potentialCredentialMatches;
    NSDictionary *_textFieldMetadata;
    bool_canAutoComplete;
    bool_gatheringFormValues;
}

@property WBUFormDataController * dataController;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) <WBUFormAutoFillFrameHandle> * frame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSString * textFieldValue;
@property(readonly) UIView<WBUFormAutoFillWebView> * webView;

+ (bool)_shouldSaveCredentialsInProtectionSpace:(id)arg1;

- (void).cxx_destruct;
- (long long)_action;
- (void)_autoFillCreditCardData;
- (void)_autoFillFormWithCreditCardData:(id)arg1;
- (void)_autoFillValues:(id)arg1;
- (bool)_canAutoFillCreditCardData;
- (void)_captureCreditCardDataWithCameraAndFill;
- (void)_ensureFormMetadata;
- (void)_gatherFormValuesWithCompletionHandler:(id)arg1;
- (void)_generateAndSuggestPassword;
- (id)_matchesForPartialString:(id)arg1;
- (void)_offerToAutoFillFromPotentialCredentialMatches;
- (long long)_passwordGenerationAssistanceAction;
- (bool)_passwordGenerationAssistanceAutoFillButtonEnabled;
- (bool)_shouldUsePasswordGenerationAssistanceForTextField;
- (bool)_textFieldLooksLikeCreditCardFormField;
- (void)_updateAutoFillButton;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)autoFill;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(double)arg2;
- (void)autoFillValues:(id)arg1 andFocusField:(id)arg2;
- (void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2;
- (void)creditCardCaptureViewControllerDidCancel:(id)arg1;
- (id)dataController;
- (void)dealloc;
- (void)fetchFormMetadataWithCompletion:(id)arg1;
- (id)frame;
- (void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2;
- (bool)hasCurrentSuggestions;
- (id)initWithFormDataController:(id)arg1;
- (void)invalidate;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)setDataController:(id)arg1;
- (id)suggestionsForString:(id)arg1;
- (id)textFieldValue;
- (id)titleOfAutoFillButton;
- (id)webView;

@end