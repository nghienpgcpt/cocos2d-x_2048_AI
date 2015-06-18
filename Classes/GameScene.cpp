//
//  GameScene.cpp
//  ai2048
//
//  Created by tianshuai on 5/30/15.
//
//

#include "GameScene.h"

#include "GameLayer.h"

USING_NS_CC;

GameScene::GameScene()
{
    
}

GameScene::~GameScene()
{
    
}

bool GameScene::init()
{
    if( !Scene::init() )
    {
        return false;
    }
    
    GameLayer *gamelayer = GameLayer::create();
    this->addChild(gamelayer);
    
    return true;
}