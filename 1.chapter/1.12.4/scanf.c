/* compile this file using following command
 * 
 * Platform: Linux/Ubuntu
 * Command: gcc -S -fno-asynchronous-unwind-tables scanf.c -o linux.s
 * Output: linux.s
 *
 * Platform: Windows 10
 * Command: cl.exe /MD /Fawin.asm scanf.c
 * Output: win.asm win.obj
 *
 */

#include <stdio.h>


int x = 10;
int main()
{
    printf("Enter x:\n");

    if (scanf("%d", &x) == 1)
    {
        printf("You entered %d...\n", x);
    }
    else
    {
        printf("what did you enter?\n");
    }


    return 0;
}
