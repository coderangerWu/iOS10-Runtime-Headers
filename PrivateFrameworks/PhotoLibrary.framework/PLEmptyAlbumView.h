/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLEmptyAlbumView : UIView {
    struct NSObject { Class x1; } * _album;
    int  _currentOrientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    int  _filter;
    bool  _filterInUse;
    UIImage * _image;
    UIImageView * _imageView;
    bool  _isCameraAlbum;
    bool  _isSharedPhotoStreamList;
    UIImage * _landscapeImage;
    UILongPressGestureRecognizer * _longPressRecognizer;
    NSString * _message;
    UILabel * _messageLabel;
    NSString * _title;
    UILabel * _titleLabel;
    bool  _useLargeImages;
}

@property (nonatomic, retain) NSObject<PLAlbumProtocol> *album;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) int filter;

- (id)_emptyRollImageForAlbum:(struct NSObject { Class x1; }*)arg1 interfaceOrientation:(long long)arg2;
- (void)_longPressGesture:(id)arg1;
- (id)_messageForAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)_newLabelWithText:(id)arg1;
- (id)_newTextViewWithText:(id)arg1;
- (void)_sizeLabelToFitView:(id)arg1;
- (id)_titleForAlbum:(struct NSObject { Class x1; }*)arg1;
- (struct NSObject { Class x1; }*)album;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (int)filter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 useLargeImages:(bool)arg2;
- (void)layoutSubviews;
- (void)paste:(id)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFilter:(int)arg1;
- (void)setImage:(id)arg1;
- (void)setIsCameraAlbum:(bool)arg1;
- (void)setIsSharedPhotoStreamList:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setPortraitImage:(id)arg1 landscapeImage:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
