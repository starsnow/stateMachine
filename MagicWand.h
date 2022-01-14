// ----------------------------------------
// MagicWand.h
// 创建者：seesea <seesea2517#gmail#com>
// 时  间：2022-01-13
// 功  能：魔法棒对象
// ----------------------------------------

#ifndef _MAGIC_WAND_H_
#define _MAGIC_WAND_H_

// #include "BaseState.h"
// #include "SleepingState.h"
// #include "States.h"
// #include "gyro.h"

class Gyro;
class BaseState;
class SleepingState;
class WakingState;
class States;

class MagicWand
{
private:
    BaseState *state;

public:
    States *states;
    Gyro *gyro;

    MagicWand();
    ~MagicWand();
    void update();
    void switchState(BaseState *newState);
};

#endif