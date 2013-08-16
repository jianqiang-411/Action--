#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;

CCScene* HelloWorld::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    HelloWorld *layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }

    CCSprite* sp = CCSprite::create("Icon.png");
    sp->setPosition(ccp(150, 150));
    this->addChild(sp);
   
    //CCMoveBy  按。。。移动  就是说以当前点为基础移动ccp(0, 100)这么多的距离
    CCMoveBy* moveBy = CCMoveBy::create(1, ccp(0, 100));
    sp->runAction(moveBy);
    
    
    //CCMoveTo是移动到那个位置这里是指ccp(200, 100这个位置
//    CCMoveTo* moveBy = CCMoveTo::create(1, ccp(200, 100));
//    sp->runAction(moveBy);
    
    
   //scaleTo缩放的意思create方法中的数字是指x,y放大缩小的倍数
//    CCActionInterval *scaleTo= CCScaleTo::create(2, 2);
//    sp->runAction(scaleTo);
    
   // CCScaleBy按。。。 缩放
//    CCActionInterval *scaleBy=CCScaleBy::create(2, 2);
//    CCActionInterval *actionByBack=scaleBy->reverse();
//    sp->runAction(actionByBack);
    
  //  CCRotateTo   create方法中第一个参数是指多长时间完成这个动作  ，第二个参数是指转动的角度
//    CCActionInterval *rotateTo=CCRotateTo::create(2, 90);
//    sp->runAction(rotateTo);
    
    
    //skewTo  create方法中第一个参数是动作完成的时间，第二个参数是x轴变化的参数，第三个参数是y轴变化的参数大家可以试试create(2, 0, 50)和create(2, 50, 0)以及create(2, 50, 50) 三个的不同变化
//    CCActionInterval *skewTo=CCSkewTo::create(2, 0, 50);
//    sp->runAction(skewTo);
    
    //所有以By结尾的动作通常是支持reverse()方法的，这个方法的意思是反动作的意思
//    CCActionInterval *skewBy=CCSkewBy::create(2, 50, 10);
//    CCActionInterval *actionByBack=skewBy->reverse();
//    sp->runAction(actionByBack);
    
    
    //CCJumpTo第一个参数是指整个动作执行的时间，第二个参数是指目标位置，第三个参数是指每次跳跃的高度，第4个参数是指整个跳跃动作几次完成
//    CCActionInterval *jumpTo=CCJumpTo::create(2, ccp(300, 200), 100, 4);
//    sp->runAction(jumpTo);
    
    //CCJumpBy参数与CCJumpTo基本相同，不同的是所有By结尾的是都是以当前为基数移动ccp(100, 100)这个参数的距离，而To是移动到ccp(100, 100)这个位置
//    CCActionInterval *jumpBy=CCJumpBy::create(2, ccp(100, 100), 50, 4);
//    CCActionInterval *actionByBack=jumpBy->reverse();
//    sp->runAction(actionByBack);
    
    
    
    //CCFadeIn从无到有，也叫淡入
//    CCActionInterval *fadeIn=CCFadeIn::create(2);
//    sp->runAction(fadeIn);
    
    //CCFadeOut从有到无
//    CCActionInterval *fadeOut=CCFadeOut::create(2);
//    sp->runAction(fadeOut);
    
    
    //颜色渐变到
//    CCActionInterval *tiniTo=CCTintTo::create(2, 255, 255, 0);
//    sp->runAction(tiniTo);
    
    
    //第一个参数是持续时间，第二个是闪耀的次数
    CCActionInterval *blink=CCBlink::create(2, 10);
    sp->runAction(blink);
    
    
  
    
    
    return true;
}

void HelloWorld::menuCloseCallback(CCObject* pSender)
{
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
