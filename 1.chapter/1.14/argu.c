/* compile this file using following command
 * 
 * Platform: Linux/Ubuntu
 * Command: gcc -S -fno-asynchronous-unwind-tables hello.c -o linux.s
 * Output: linux.s
 *
 * Platform: Windows 10
 * Command: cl.exe /Fawin.asm hello.c
 * Output: win.asm win.obj
 *
 */
#include <stdio.h>

int f(int a, int b, int c)
{
    return a*b+c;
}

int main()
{
    printf("%d\n", f(1,2,3));

    return 0;
}
