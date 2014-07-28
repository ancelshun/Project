#ifndef Project_Common_h
#define Project_Common_h

//----------------------------------------------------
#define kColorRGBA(r, g, b, a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define kColorRBG(r, g, b)     kColorRGBA(r, g, b, 1.0f)

//----------------------------------------------------
#define IOS_5_OR_LATER      ([[[UIDevice currentDevice] systemVersion] compare:@"5.0"] != NSOrderedAscending)
#define IOS_6_OR_LATER      ([[[UIDevice currentDevice] systemVersion] compare:@"6.0"] != NSOrderedAscending)
#define IOS_7_OR_LATER      ([[[UIDevice currentDevice] systemVersion] compare:@"7.0"] != NSOrderedAscending)
#define IOS_N_OR_LATER(n)   ([[[UIDevice currentDevice] systemVersion] compare:n] != NSOrderedAscending)

//----------------------------------------------------
#define kScreenSize           [[UIScreen mainScreen] bounds].size
#define kScreenWidth          [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight         [[UIScreen mainScreen] bounds].size.height

#define kApplicationSize      [[UIScreen mainScreen] applicationFrame].size
#define kApplicationWidth     [[UIScreen mainScreen] applicationFrame].size.width
#define kApplicationHeight    [[UIScreen mainScreen] applicationFrame].size.height

#define kStatusBarHeight      20
#define kNavigationBarHeight  44
#define kContentHeight        (kScreenHeight - kNavigationBarHeight -kStatusBarHeight)

#endif
