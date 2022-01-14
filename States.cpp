// ----------------------------------------
// States.cpp
// 创建者：seesea <seesea2517#gmail#com>
// 时  间：2022-01-14
// 功  能：状态集合类的实现
// ----------------------------------------

#include "States.h"

States::States(MagicWand *wand)
{
    this->wand = wand;
    sleeping = new SleepingState(wand);
}

States::~States()
{
    delete sleeping;
}