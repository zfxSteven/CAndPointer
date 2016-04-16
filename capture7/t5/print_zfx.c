/*************************************************************************
  > File Name   : print_zfx.c
  > Author      : zfx
  > Created Time: 2016年04月10日 星期日 17时24分28秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

#include"print_zfx.h"

/* get all the format input 
 * and judge the which format you get
 * choose correct function*/
int print_zfx( char *string, ...)
{
    //init
    va_list input;
    int counter = 0;
    va_start( input, string );
    char *string_formal = string;//point the first char

    while( *string_formal != '\0'){
        if( *string_formal == '%' ){
            string_formal++;
            switch(*string_formal){
                case 'd': print_int( (int)va_arg(input,int));break;
                case 'f': print_double( (double)va_arg(input,double));break;
                case 's': print_string( (char *)va_arg(input,char *));break;
                case 'c': printChar( (char)va_arg(input,int));break;
                default:printf("This format support do not exist!\n");
            }//end-switch
            string_formal++;
        }else{
            //just output char & move on
            printChar( *string_formal++ );
        }
    }//end-while   
    va_end(input);
}

/* all format print function */
int print_int( int int_input)
{
    fprintf(stdout,"%d",int_input);
    return EXIT_SUCCESS;
}
int print_float( float float_input)
{
    fprintf(stdout,"%f",float_input);
    return EXIT_SUCCESS;
}
int print_double( double double_input)
{
    fprintf(stdout,"%f",double_input);
    return EXIT_SUCCESS;
}
int print_string( char *string_input)
{
    fprintf(stdout,"%s",string_input);
    return EXIT_SUCCESS;
}
int printChar( char c)
{
    fprintf(stdout,"%c",c);
    return EXIT_SUCCESS;
}

