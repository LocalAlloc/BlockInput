#include <windows.h>

int main()
{
    FreeConsole();
    if (MessageBoxA(NULL, "if you click yes your keyboard and mouse will be disabled for 10 seconds!", "Confirmation!", MB_YESNO) == IDYES)
    {
        BlockInput(true);

        Sleep(10000);

        BlockInput(false);

        return 0;
    }
    else
    {
        MessageBoxA(NULL, "oh ok i will not block the keyboard", "", MB_OK);
    }
}
