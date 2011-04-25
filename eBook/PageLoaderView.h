//
//  PageLoaderView.h
//  eBook
//
//  Created by Dan Lynch on 4/25/11.
//  Copyright 2011 Pyramation Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Page;

@interface PageLoaderView : UIWebView {
    
}

- (id) initWithFrame:(CGRect) frame page:(Page*)page;

@end
