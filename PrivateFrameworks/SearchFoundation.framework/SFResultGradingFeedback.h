/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFResultGradingFeedback : SFResultFeedback <NSCopying, SFProtobufObject> {
    unsigned int  _grade;
    NSString * _textFeedback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int grade;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PBCodable *protobufMessage;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textFeedback;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)grade;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 grade:(unsigned int)arg2;
- (id)initWithResult:(id)arg1 grade:(unsigned int)arg2 textFeedback:(id)arg3;
- (void)setTextFeedback:(id)arg1;
- (id)textFeedback;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

+ (Class)protobufClass;

- (id)protobufMessage;

@end
