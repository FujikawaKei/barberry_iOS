// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC11barbellyApp11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
@property (nonatomic, readonly, copy) NSString * _Nonnull APPLICATION_KEY;
@property (nonatomic, readonly, copy) NSString * _Nonnull CLIENT_KEY;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UILabel;
@class UIButton;
@class NSCoder;

SWIFT_CLASS("_TtC11barbellyApp12BackBodyCell")
@interface BackBodyCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified muscleNameLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified trapMuscle;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified latMuscle;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified spinaeMuscle;
- (IBAction)latClick:(id _Nonnull)sender;
- (IBAction)spinaeClick:(id _Nonnull)sender;
- (IBAction)trapClick:(id _Nonnull)sender;
- (void)resetMuscle;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class InputViewController;
@class FrontBodyCell;
@class LegsBodyCell;
@class UICollectionView;
@class NSIndexPath;

SWIFT_CLASS("_TtC11barbellyApp28BodyCollectionViewDataSource")
@interface BodyCollectionViewDataSource : NSObject <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
@property (nonatomic, strong) InputViewController * _Nullable delegate;
@property (nonatomic, strong) FrontBodyCell * _Nullable frontCell;
@property (nonatomic, strong) BackBodyCell * _Nullable backCell;
@property (nonatomic, strong) LegsBodyCell * _Nullable legsCell;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


SWIFT_CLASS("_TtC11barbellyApp14ComingSoonCell")
@interface ComingSoonCell : UITableViewCell
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp18CustomKeyboardView")
@interface CustomKeyboardView : UIView
@property (nonatomic, strong) InputViewController * _Nullable delegate;
@property (nonatomic, copy) NSString * _Nonnull digit1;
@property (nonatomic, copy) NSString * _Nonnull digit2;
@property (nonatomic, copy) NSString * _Nonnull digit3;
@property (nonatomic) NSInteger sum;
@property (nonatomic, copy) NSString * _Nonnull outPut;
- (IBAction)btn0:(id _Nonnull)sender;
- (IBAction)btn1:(id _Nonnull)sender;
- (IBAction)btn2:(id _Nonnull)sender;
- (IBAction)btn3:(id _Nonnull)sender;
- (IBAction)btn4:(id _Nonnull)sender;
- (IBAction)btn5:(id _Nonnull)sender;
- (IBAction)btn6:(id _Nonnull)sender;
- (IBAction)btn7:(id _Nonnull)sender;
- (IBAction)btn8:(id _Nonnull)sender;
- (IBAction)btn9:(id _Nonnull)sender;
- (IBAction)btnPoint:(id _Nonnull)sender;
- (IBAction)deleteBtn:(id _Nonnull)sender;
- (IBAction)clearBtn:(id _Nonnull)sender;
- (void)clear;
- (IBAction)doneBtn:(id _Nonnull)sender;
- (void)setText:(NSString * _Nonnull)i;
- (NSInteger)getSum;
- (NSString * _Nonnull)getOutPut;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImageView;

SWIFT_CLASS("_TtC11barbellyApp19CustomSectionHeader")
@interface CustomSectionHeader : UITableViewCell
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified userImage;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified userName;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class TopViewController;
@class UITableView;

SWIFT_CLASS("_TtC11barbellyApp18FeedViewDataSource")
@interface FeedViewDataSource : NSObject <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) TopViewController * _Nullable delegate;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp13FrontBodyCell")
@interface FrontBodyCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified rightArmMuscle;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified leftArmMuscle;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified rightShoulderMuscle;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified leftShoulederMuscle;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified absMuscle;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified muscleNameLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified chestMuscle;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified bodyImage;
- (IBAction)chestClick:(id _Nonnull)sender;
- (IBAction)absClick:(id _Nonnull)sender;
- (IBAction)leftShoulederClick:(id _Nonnull)sender;
- (IBAction)rightShoulederClick:(id _Nonnull)sender;
- (IBAction)leftArmClick:(id _Nonnull)sender;
- (IBAction)rightArmClick:(id _Nonnull)sender;
- (void)resetMuscle;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIActivityIndicatorView;
@class NSBundle;

SWIFT_CLASS("_TtC11barbellyApp14ViewController")
@interface ViewController : UIViewController
@property (nonatomic, strong) UIActivityIndicatorView * _Null_unspecified myActivityIndicator;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class SelectionTableViewDataSource;
@class PickerViewDataSource;
@class NSLayoutConstraint;
@class RepsSelectionView;
@class UIPickerView;
@class UITextField;

SWIFT_CLASS("_TtC11barbellyApp19InputViewController")
@interface InputViewController : ViewController
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified saveButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified repsButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified workoutNameButton;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified repsTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified weightTextField;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified inputWeightButton;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified workoutNameTextField;
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified tableView;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified defaultConstraint;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified menuView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified barView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified legsButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified backButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified frontButton;
@property (nonatomic, weak) IBOutlet UICollectionView * _Null_unspecified collectionView;
@property (nonatomic, strong) BodyCollectionViewDataSource * _Nullable dataSource;
@property (nonatomic, strong) SelectionTableViewDataSource * _Nullable tableDataSource;
@property (nonatomic, strong) PickerViewDataSource * _Nullable pickerDataSource;
@property (nonatomic, strong) NSLayoutConstraint * _Null_unspecified barConstraint;
@property (nonatomic) BOOL firstFlg;
@property (nonatomic, strong) CustomKeyboardView * _Nullable keyboardView;
@property (nonatomic, strong) RepsSelectionView * _Nullable repsView;
@property (nonatomic, strong) UIPickerView * _Nullable pickerView;
@property (nonatomic, readonly) CGFloat screenWidth;
@property (nonatomic, readonly) CGFloat screenHeight;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (IBAction)dismissButton:(id _Nonnull)sender;
- (IBAction)frontButton:(UIButton * _Nonnull)sender;
- (IBAction)backButton:(id _Nonnull)sender;
- (IBAction)legsButton:(id _Nonnull)sender;
- (void)buttonSwitch:(UIButton * _Nonnull)button;
- (void)setConstraintForBarView:(UIButton * _Nonnull)button;
- (IBAction)InputWeightButton:(id _Nonnull)sender;
- (IBAction)workoutNameButton:(id _Nonnull)sender;
- (IBAction)repsButton:(id _Nonnull)sender;
- (void)showPickerView;
- (void)DismissKeyboard;
- (void)reset;
- (void)checkIsEnoughInfo;
- (IBAction)saveButton:(id _Nonnull)sender;
- (void)clearAll;
- (void)setTableAndCollection;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp12LegsBodyCell")
@interface LegsBodyCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified muscleNameLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified hipMuscle;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified quadMuscle;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified hamMuscle;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified calfMuscle;
- (IBAction)hipClick:(id _Nonnull)sender;
- (IBAction)hamClick:(id _Nonnull)sender;
- (IBAction)quadClick:(id _Nonnull)sender;
- (IBAction)calfClick:(id _Nonnull)sender;
- (void)resetMuscle;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp19LoginViewController")
@interface LoginViewController : ViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp11MessageCell")
@interface MessageCell : UITableViewCell
@property (nonatomic, strong) TopViewController * _Nullable delegate;
- (IBAction)workoutDayButton:(id _Nonnull)sender;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp20MyPageViewDataSource")
@interface MyPageViewDataSource : NSObject <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) TopViewController * _Nullable delegate;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp8NewsCell")
@interface NewsCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified userImage;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified newsText;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp18NewsViewDataSource")
@interface NewsViewDataSource : NSObject <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) TopViewController * _Nullable delegate;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp20PickerViewDataSource")
@interface PickerViewDataSource : NSObject <UIPickerViewDelegate, UIPickerViewDataSource>
@property (nonatomic, strong) InputViewController * _Nullable delegate;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull numbers;
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView * _Nonnull)pickerView;
- (NSInteger)pickerView:(UIPickerView * _Nonnull)pickerView numberOfRowsInComponent:(NSInteger)component;
- (UIView * _Nonnull)pickerView:(UIPickerView * _Nonnull)pickerView viewForRow:(NSInteger)row forComponent:(NSInteger)component reusingView:(UIView * _Nullable)view;
- (void)pickerView:(UIPickerView * _Nonnull)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;
- (void)makingNumbers:(NSInteger)number;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp11ProfileCell")
@interface ProfileCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified userImage;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified newsText;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp17RepsSelectionView")
@interface RepsSelectionView : UIView
@property (nonatomic, strong) InputViewController * _Nullable delegate;
- (IBAction)button10:(id _Nonnull)sender;
- (IBAction)button8:(id _Nonnull)sender;
- (IBAction)button6:(id _Nonnull)sender;
- (IBAction)othersButton:(id _Nonnull)sender;
- (void)done;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp20SearchViewDataSource")
@interface SearchViewDataSource : NSObject <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) TopViewController * _Nullable delegate;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp28SelectionTableViewDataSource")
@interface SelectionTableViewDataSource : NSObject <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) InputViewController * _Nullable delegate;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull mSections;
@property (nonatomic, copy) NSArray<NSArray<NSString *> *> * _Nonnull mMapIndexer;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (NSString * _Nullable)tableView:(UITableView * _Nonnull)tableView titleForHeaderInSection:(NSInteger)section;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)createSections;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UITabBar;
@class UITabBarItem;

SWIFT_CLASS("_TtC11barbellyApp14TabBarDelegate")
@interface TabBarDelegate : NSObject <UITabBarControllerDelegate>
@property (nonatomic, strong) TopViewController * _Nullable delegete;
- (void)tabBar:(UITabBar * _Nonnull)tabBar didSelectItem:(UITabBarItem * _Nonnull)item;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11barbellyApp17TopViewController")
@interface TopViewController : ViewController <UITabBarDelegate>
@property (nonatomic, strong) FeedViewDataSource * _Nullable feedDataSource;
@property (nonatomic, strong) SearchViewDataSource * _Nullable searchDataSource;
@property (nonatomic, strong) NewsViewDataSource * _Nullable newsDataSource;
@property (nonatomic, strong) MyPageViewDataSource * _Nullable myPageDataSource;
@property (nonatomic) BOOL firstFlg;
@property (nonatomic, strong) UIView * _Null_unspecified splashView;
@property (nonatomic, strong) UIImageView * _Null_unspecified logoImageView;
@property (nonatomic, weak) IBOutlet UITabBarItem * _Null_unspecified feedTabButton;
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified tableView;
@property (nonatomic, weak) IBOutlet UITabBar * _Null_unspecified tabBar;
@property (nonatomic, weak) IBOutlet UITabBarItem * _Null_unspecified inputModal;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)tabBar:(UITabBar * _Nonnull)tabBar didSelectItem:(UITabBarItem * _Nonnull)item;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;

@interface UIColor (SWIFT_EXTENSION(barbellyApp))
+ (UIColor * _Nonnull)hex:(NSString * _Nonnull)hexStr alpha:(CGFloat)alpha;
@end


#pragma clang diagnostic pop
