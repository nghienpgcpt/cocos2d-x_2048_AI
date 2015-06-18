//
//  GameScene.h
//  ai2048
//
//  Created by tianshuai on 5/30/15.
//
//

#ifndef __ai2048__GameScene__
#define __ai2048__GameScene__

#include "cocos2d.h"

class GameScene : public cocos2d::Scene
{
public:
    GameScene();
    ~GameScene();
    bool init();
    CREATE_FUNC(GameScene);
};

#endif /* defined(__ai2048__GameScene__) */
