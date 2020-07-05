/* compile this file using following command
 * 
 * Platform: Linux/Ubuntu
 * Command: gcc -S -fno-asynchronous-unwind-tables scanf.c -o linux.s
 * Output: linux.s
 *
 * Platform: Windows 10
 * Command: cl.exe /Fawin.asm scanf.c
 * Output: win.asm win.obj
 *
 */

#include <stdio.h>


int main()
{
    int x;
    printf("Enter x:\n");

    scanf("%d", &x);

    printf("You entered %d...\n", x);

    return 0;
}
