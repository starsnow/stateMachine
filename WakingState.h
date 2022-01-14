// ----------------------------------------
// WakingState.h
// 创建者：seesea <seesea2517#gmail#com>
// 时  间：2022-01-14
// 功  能：唤醒状态
// ----------------------------------------

#ifndef _WAKING_STATE_H_
#define _WAKING_STATE_H_

#include "MagicWand.h"
#include "BaseState.h"
#include "gyro.h"

class WakingState : public BaseState
{
private:
    MagicWand *wand;
    uint8_t threshold;

public:
    WakingState (MagicWand* wand, uint8_t threshold = DEFAULT_THRESHOLD)
    {
        this->wand = wand;
        this->threshold = threshold;
    }

    void update()
    {
        if (wand->gyro->isMoving(threshold))
        {
        }
    }
};

#endif