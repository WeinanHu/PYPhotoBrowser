//  代码地址: https://github.com/iphone5solo/PYPhotosView
//  代码地址: http://code4app.com/thread-8612-1-1.html
//  Created by CoderKo1o.
//  Copyright © 2016年 iphone5solo. All rights reserved.
//


#import <MediaPlayer/MediaPlayer.h>
@class PYMoviePlayerView, ASIHTTPRequest;

@interface PYMoviePlayerController : MPMoviePlayerController
{
    ASIHTTPRequest *videoRequest;
    unsigned long long Recordull;
    BOOL isPlay;
}

/** 自定义控制view */
@property (nonatomic, weak) PYMoviePlayerView *playView;
/** 播放按钮图片 */
@property (nonatomic, weak) UIImageView *playButtonView;
/** 播放时间 */
@property (nonatomic, weak) UILabel *durationLabel;
/** 网络链接 */
@property (nonatomic, copy) NSString *movieNetworkUrl;
/** 快进了 */
@property (nonatomic, assign) BOOL skip; // 是否快进了（想要观看的时间超过了已缓存）
/** 最近一次播放时间 */
@property (nonatomic, assign) NSTimeInterval lastPlaybackTime;
/** 不是视频 */
@property (nonatomic, assign) BOOL noVideo;



@end