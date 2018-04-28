#include <iostream>
#include <string>
#include <stdlib.h>
#define _WIN32_WINNT 0x0500
#include <windows.h>
#include <vector>

using namespace std;

int RandomNumGen(int maxrange, int minrange);
int Time(int hours);
void LeftClick();
double RandomNumGen2(double minrange, double maxrange);
void RightClick();

int main(int argc, char *arSgv[])
{
    Sleep(5000);
    int holder = 28;

    while(1)
    {
        /*
        if(holder == 28)
        {
            int x = 1330; //START 1330
            int y = 255;
            int counter = 1;

            while(counter < 28)
            {
                keybd_event(VK_SHIFT,0x26,0,0);

                Sleep(20);
                if(counter % 4 == 1)
                {
                    y += 37;
                    x = 1330;
                }

                SetCursorPos(x, y);
                LeftClick();

                counter++;
                x += 42;

                keybd_event(VK_SHIFT, 0x26, KEYEVENTF_KEYUP, 0);
            }

            holder = 0;
        }

        keybd_event(VK_RIGHT,0x26,0,0);
        keybd_event(VK_RIGHT, 0x26, KEYEVENTF_KEYUP, 0);
        keybd_event(VK_LEFT,0x26,0,0);
        keybd_event(VK_LEFT, 0x26, KEYEVENTF_KEYUP, 0);
        */
        ////////////////////////////
        //Sleep(1000);

        SetCursorPos(1025, 125);
        Sleep(200);
        LeftClick();
        ////////////////////////////

        Sleep(2000);


        SetCursorPos(1414, 255);
        Sleep(100);
        LeftClick();
        SetCursorPos(1456, 255);
        Sleep(100);
        LeftClick();


        //keybd_event(VK_SHIFT,0x26,0,0);
        SetCursorPos(1330, 292);
        Sleep(100);
        keybd_event(VK_SHIFT,0x26,0,0);
        LeftClick();
        Sleep(100);
        keybd_event(VK_SHIFT, 0x26, KEYEVENTF_KEYUP, 0);

        holder += 1;
    }
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

