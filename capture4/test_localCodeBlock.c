/*************************************************************************
  > File Name   : test_localCodeBlock.c
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年02月11日 星期四 04时19分52秒
 ************************************************************************/
#include <stdio.h>
void main(void);
void main()
{
    /* Begin local block for function main() */
    int test_var = 10;
    printf("Test variable before the if statement: %d\n", test_var);
    if (test_var>5)
    {
        /* Begin local block for "if" statement */
        int test_var = 5;
        printf("Test variable within the if statement: %d\n",test_var);
        {
            /* Begin independent local block (not tied to any function or keyword) */
            int test_var = 0;
            printf ("Test variable within the independent local block: %d\n",test_var);                                                  }
        /* End independent local block */
    }
    printf ("Test variable after the if statement: %d\n", test_var);
    /*End local block for function main () */
}
