// ----------------------------------------
// BaseState.h
// 创建者：seesea <seesea2517#gmail#com>
// 时  间：2022-01-13
// 功  能：状态的基类
// ----------------------------------------

#ifndef _STATE_BASE_H_
#define _STATE_BASE_H_

#define uint8_t int
#define DEFAULT_THRESHOLD 10

#include "MagicWand.h"

class BaseState
{
public:
    virtual void update()   {}
    virtual void enter()    {}
    virtual void exit()     {}
};

#endif