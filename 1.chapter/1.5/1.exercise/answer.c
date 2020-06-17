/* Find user32.lib: where /r d:/ "user32.lib"
 * Compile command line
 * cl answer.c "d:\Windows Kits\10\Lib\10.0.18362.0\um\x64\User32.Lib"
 *
 * /


#include <Windows.h>

int main()
{
    MessageBeep(0xFFFFFFFF);

    return 0;
}
