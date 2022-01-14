// ----------------------------------------
// MagicWand.cpp
// 创建者：seesea <seesea2517#gmail#com>
// 时  间：2022-01-14
// 功  能：魔法棒
// ----------------------------------------

#include "BaseState.h"
#include "SleepingState.h"
#include "WakingState.h"
#include "States.h"
#include "gyro.h"
#include "MagicWand.h"

MagicWand::MagicWand()
{
    gyro = new Gyro();
    states = new States(this);
    state = nullptr;
    switchState(states->sleeping);
}

MagicWand::~MagicWand()
{
    delete states;
    delete gyro;
}

void MagicWand::update()
{
    gyro->update();
    state->update();
}

void MagicWand::switchState(BaseState *newState)
{
    if (state != nullptr)
    {
        state->exit();
    }
    
    state = newState;
    if (state == nullptr)
    {
        return;
    }

    state->enter();
}