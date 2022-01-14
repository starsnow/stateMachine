#define DEBUG

#ifdef DEBUG
    #include <iostream>
    #define debugOutput(x) cout << x << endl;
#else
    #define debugOutput(x) 
#endif

using namespace std;

#include "MagicWand.h"
// #include "gyro.h"

int main()
{
    debugOutput("xxx");

    // for (int i = 0; i < 10; ++i)
    // {
    //     cout << "---- " << i << " -----" << endl;
    // }

    MagicWand wand;
    wand.update();
}
