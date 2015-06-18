//
//  GameOverLayer.h
//  ai2048
//
//  Created by tianshuai on 6/3/15.
//
//

#ifndef __ai2048__GameOverLayer__
#define __ai2048__GameOverLayer__

#include "cocos2d.h"

class GameOverLayer : public cocos2d::LayerColor
{
public:
    GameOverLayer();
    ~GameOverLayer();
    bool init();
    CREATE_FUNC(GameOverLayer);
    
    bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event);
    
    void startNewGame(cocos2d::Ref* pSender);
    void startTween(cocos2d::Ref* pSender);
    
};

#endif /* defined(__ai2048__GameOverLayer__) */
