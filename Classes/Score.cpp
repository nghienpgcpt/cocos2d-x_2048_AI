//
//  Score.cpp
//  AreUBlind
//
//  Created by tianshuai on 4/23/15.
//
//

#include "Score.h"

USING_NS_CC;
Score* Score::_instance = NULL;

Score* Score::getInstance()
{
    if (_instance == NULL)
    {
        _instance = new Score;
    }
    return _instance;
}

int Score::getTopScore()
{
    int score = UserDefault::getInstance()->getIntegerForKey("topscore");
    if (score == 0)
    {
        UserDefault::getInstance()->setIntegerForKey("topscore", 0);
    }
    return score;
}

void Score::setTopScore(int socre)
{
    UserDefault::getInstance()->setIntegerForKey("topscore", socre);
}

