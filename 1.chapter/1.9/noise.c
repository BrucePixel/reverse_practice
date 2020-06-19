/* compile this file using following command
 * 
 * Platform: Linux/Ubuntu
 * Command: gcc -S -fno-asynchronous-unwind-tables noise.c -o linux.s
 * Output: linux.s
 *
 * Platform: Windows 10
 * Command: cl.exe /Fawin.asm /Fewin.exe /Fowin.obj noise.c
 * Output: win.asm win.obj
 *
 */


#include <stdio.h>

void f1()
{
    int a = 1, b = 2, c = 3;
}

void f2()
{
    int a, b, c;
    printf("%d, %d, %d\n", a, b, c);
}

int main()
{
    f1();
    f2();
}
