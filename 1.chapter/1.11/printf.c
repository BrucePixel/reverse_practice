/* compile this file using following command
 * 
 * Platform: Linux/Ubuntu
 * Command: gcc -S -fno-asynchronous-unwind-tables noise.c -o linux.s
 * Output: linux.s
 *
 * Platform: Windows 10 x86 msvc
 * Command: cl.exe /Fawin.asm /Fewin.exe /Fowin.obj /MD printf.c
 * Output: win.asm win.obj
 *
 */

#include <stdio.h>


int main()
{
    printf("a=%d; b=%d; c=%d", 1, 2, 3);
    return 0;
}
