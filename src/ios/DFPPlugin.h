#import <Cordova/CDV.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "DFPBannerView.h"
#import "DFPInterstitial.h"
#import "GADAdMobExtras.h"
#import "GADAdSize.h"

#pragma mark DFP Plugin

// This version of the DFP plugin has been tested with Cordova version 3.0.0.
@interface DFPPlugin : CDVPlugin {
  BOOL positionAdAtTop_;
  DFPBannerView *bannerView_;
  DFPInterstitial *interstitial_;
}

@property(nonatomic, retain) DFPBannerView *bannerView;
@property(nonatomic, retain) DFPInterstitial *interstitial;

- (void)createBannerView:(CDVInvokedUrlCommand *)command;
- (void)createInterstitialView:(CDVInvokedUrlCommand *)command;
- (void)requestAd:(CDVInvokedUrlCommand *)command;
- (void)killAd:(CDVInvokedUrlCommand *)command;

@end
