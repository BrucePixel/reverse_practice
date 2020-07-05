/* compile this file using following command
 * 
 * Platform: Linux/Ubuntu
 * Command: gcc -S -fno-asynchronous-unwind-tables scanf.c -o linux.s
 * Output: linux.s
 *
 * Platform: Windows 10
 * Command: cl.exe /MD /Fawin.asm a.c
 * Output: win.asm win.obj
 *
 */

#include <string.h>
#include <stdio.h>

void alter_string(char *s)
{
    strcpy(s, "Goodbye!");
    printf("Result: %s\n", s);
}


int main()
{
    alter_string("Hello, world\n");
}
