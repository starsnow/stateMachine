// ----------------------------------------
// States.h
// 创建者：seesea <seesea2517#gmail#com>
// 时  间：2022-01-13
// 功  能：状态集合
// ----------------------------------------

#ifndef _STATES_H_
#define _STATES_H_

// #include "BaseState.h"
// #include "gyro.h"
#include "MagicWand.h"

class SleepingState;
class WakingState;

class States
{
private:
    MagicWand *wand;

public:
    SleepingState *sleeping;

    States(MagicWand *wand);    
    ~States();
};

#endif