/* compile this file using following command
 * 
 * Platform: Linux/Ubuntu
 * Command: gcc -S emptyFun.c
 * Output: emptyFun.s
 *
 * Platform: Windows 10
 * Command: cl.exe /Fawin.asm emptyFun.c
 * Output: emptyFun.asm emptyFun.obj
 *
 */


#include <stdio.h>

int main()
{
	printf("hello, world\n");
    return 0;
}
