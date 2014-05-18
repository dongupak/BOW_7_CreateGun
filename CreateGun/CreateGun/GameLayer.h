//
//  HelloWorldLayer.h
//  CreateGun
//
//  Created by EUNJI KIM on 13. 6. 25..
//  Copyright __MyCompanyName__ 2013년. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface GameLayer : CCLayer {
    CCAnimate *sitAnimate; //CCAnimate형의 sitAnimate 전역변수 선언
    CCAnimate *smokeAnimate; //CCAnimate형의 smokeAnimate 전역변수 선언
    CCSprite *gunSmoke; //CCSprite형의 gunSmoke 전역변수 선언
    
    //GameLayer.h 파일에서 미리 변수를 선언해놓으면 GameLayer.m 파일에서 따로 변수를 선언해 주지않고도 변수명을 사용할 수 있습니다.
}
+(CCScene *) scene;
@end
