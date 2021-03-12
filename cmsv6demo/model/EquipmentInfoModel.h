//
//  EquipmentInfoModel.h
//  cmsv6demo
//
//  Created by tongtianxing on 2018/9/3.
//  Copyright © 2018年 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YYModel.h"
@interface EquipmentInfoModel : NSObject<YYModel>

@property NSString *id2;
@property NSInteger pid;
@property NSInteger ic;
@property NSString *io;
@property NSInteger cc;
@property NSString *cn;
@property NSInteger tc;
@property NSString *tn;
@property NSInteger md;
@property NSString *sim;
@property NSString *vt;

@property NSInteger stFdt;




-(BOOL)is1078;


@end
//id    string    设备号			Device No
//pid    number    设备所属公司 	Equipment Company
//ic    number    IO数目			IO number
//io    string    IO名称			IO name
//以','分隔					separated by ,
//cc    number    通道数目		channel number
//cn    string    通道名称		channel name
//以','分隔
//tc    number    温度传感器数目	temperature sensor
//tn    string    温度传感器名称	temperature sensor name
//以','分隔
//md    number    外设参数		peripheral parameters
//按位表示，每位表示一种外设，第一位为支持视频，第二位为油路控制，第三位为电路控制，第四位为tts语音，第五位为数字对讲，第六位为支持抓拍，第七位为支持监听，第八位为油量传感器，第九位为支持对讲，第十位为ODB外设。
//sim    string    SIM卡号		sim card number
//vt    string    车辆类型：1清洗车,2洒水车,3扫地车4 警员 5 调度员 Vehicle type: 1 washing truck, 2 sprinkler truck, 3 sweeping truck 4 police officer 5 dispatcher

    
//According to bit, each bit represents a kind of peripheral, the first bit is video support,
//the second bit is oil circuit control, the third bit is circuit control, the fourth bit is tts voice, and the fifth bit is digital intercom ,
//The sixth place is support for capture, the seventh place is for monitoring, the eighth place is for fuel sensor,
//the ninth place is for intercom, and the tenth place is for ODB peripherals.
