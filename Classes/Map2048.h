//
//  Map2048.h
//  ai2048
//
//  Created by tianshuai on 5/30/15.
//
//

#ifndef __ai2048__Map2048__
#define __ai2048__Map2048__

#include "cocos2d.h"
#include "TileSprite.h"
#include "ai2048.h"
#include "ai.h"

enum CONTROL
{
    UP = 1,
    DOWN,
    LEFT,
    RIGHT
};

class Map2048
{
private:
    struct Tile
    {
        TileSprite *tile;
        cocos2d::Vec2 pos;
        unsigned int num;
    };
    
    Tile _map[MAP_SIZE][MAP_SIZE];
    unsigned int score;
    
    void remove_up_blank();
    void up();
    void remove_down_blank();
    void down();
    void remove_left_blank();
    void left();
    void remove_right_blank();
    void right();
    
    int getBlankNum();
    
    void genRandom_2_4();
    
    bool isGameOver();
public:
    Map2048();
public:
    void setTilePos(int row,int col, cocos2d::Vec2 pos);

    void initStart2();
    
    void print();
    //返回值为false 游戏结束
    bool doControl(CONTROL contr);
    unsigned int getScore();
    
    //返回值为false 游戏结束
    bool aiDoControl();
    
    //thread
    void findBestMoveThread();
    void getBestMove();
    bool isThreadRuning;
    bool unused;
    bool Control();
private:
    void setBoard();
    unsigned long long getBoard();
    unsigned long long board[4][4];
    unsigned long long cboard;
    int move;
};

#endif /* defined(__ai2048__Map2048__) */
