#include <iostream>
#include <string>
#include <stdlib.h>
#define _WIN32_WINNT 0x0500
#include <windows.h>
#include <vector>

using namespace std;

int RandomNumGen(int maxrange, int minrange);
double RandomNumGen2(double minrange, double maxrange);
void LeftClick();
void RightClick();

bool ThreeTick = true;

class Mining
{

public:
    void beginFish(); //Click location of fish

    void threeTickTB(); //Swamp tar and herb

    void threeTickDropFish(); //Drop fish

    void runThreeTickFishing(); //run three tick fishing
};

int main(int argc, char *argv[])
{
    Sleep(5000);

    Mining mining;

    //mining.getOptions(argc, argv);

    if(ThreeTick)
    {
        while(1)
        {
            mining.runThreeTickFishing();
        }
    }
}

void Mining::beginFish()
{
    SetCursorPos(1025, 125);
    Sleep(200);
    LeftClick();
}

void Mining::threeTickDropFish()
{
    SetCursorPos(1330, 292);
    Sleep(100);
    keybd_event(VK_SHIFT,0x26,0,0);
    LeftClick();
    Sleep(100);
    keybd_event(VK_SHIFT, 0x26, KEYEVENTF_KEYUP, 0);
}

void Mining::threeTickTB()
{
    SetCursorPos(1414, 255);
    Sleep(100);
    LeftClick();
    SetCursorPos(1456, 255);
    Sleep(100);
    LeftClick();
}

void Mining::runThreeTickFishing()
{
    beginFish();

    Sleep(2000); //Usual time to process catching a fish

    threeTickTB();

    threeTickDropFish();
}

void LeftClick()
{
  INPUT input = {0};
  ///left down
  input.type      = INPUT_MOUSE;
  input.mi.dwFlags  = MOUSEEVENTF_LEFTDOWN;
  ::SendInput(1,&input,sizeof(INPUT));

  ///left up
  ::ZeroMemory(&input,sizeof(INPUT));
  input.type      = INPUT_MOUSE;
  input.mi.dwFlags  = MOUSEEVENTF_LEFTUP;
  ::SendInput(1,&input,sizeof(INPUT));
}

void RightClick()
{
  INPUT input = {0};
  ///left down
  input.type      = INPUT_MOUSE;
  input.mi.dwFlags  = MOUSEEVENTF_RIGHTDOWN;
  ::SendInput(1,&input,sizeof(INPUT));

  ///left up
  ::ZeroMemory(&input,sizeof(INPUT));
  input.type      = INPUT_MOUSE;
  input.mi.dwFlags  = MOUSEEVENTF_RIGHTUP;
  ::SendInput(1,&input,sizeof(INPUT));
}

