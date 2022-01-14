// ----------------------------------------
// SleepingState.h
// 创建者：seesea <seesea2517#gmail#com>
// 时  间：2022-01-13
// 功  能：休眠状态
// ----------------------------------------

#ifndef _SLEEP_STATE_H_
#define _SLEEP_STATE_H_

#include "MagicWand.h"
#include "BaseState.h"
#include "gyro.h"
#include "States.h"

class SleepingState : public BaseState
{
private:
    MagicWand *wand;
    uint8_t threshold;

public:
    SleepingState (MagicWand* wand, uint8_t threshold = DEFAULT_THRESHOLD)
    {
        this->wand = wand;
        this->threshold = threshold;
    }

    void update()
    {
        if (wand->gyro->isMoving(threshold))
        {
            wand->switchState(wand->states->sleeping);
        }
    }
};

#endif