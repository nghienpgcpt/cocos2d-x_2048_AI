//
//  TileSprite.h
//  ai2048
//
//  Created by tianshuai on 5/30/15.
//
//

#ifndef __ai2048__TileSprite__
#define __ai2048__TileSprite__

#include "cocos2d.h"

class TileSprite : public cocos2d::Node
{
public:
    TileSprite();
    ~TileSprite();
    bool init();
    CREATE_FUNC(TileSprite);
    
    void onEnter();
    
    void setSize(cocos2d::Vec2 size);
    void setNumber(unsigned int num);
    
    void addToLayer(bool isScale);
    void removeFromLayer();
private:
    unsigned int _num;
    cocos2d::Vec2 _size;
    cocos2d::DrawNode *_backgound;
    
    void drawBackGround();
    void addLable();
};

#endif /* defined(__ai2048__TileSprite__) */
