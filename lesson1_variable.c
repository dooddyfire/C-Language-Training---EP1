/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  /* stdio  = standard input output */

int main()
{
    
    int x = 5; 
    int y = 15;
    int result = x + y; 
    float z = 2.345;
    
    char st[] = "I have red apple";
    char c = 'A';
    
    printf("Your char is %c\n",c);
    printf("Your String is : %s\n",st);
    printf("Hello World\n");
    printf("Test\n");
    //printf("x มีค่าเป็น %d ",x);
    
    printf("x = %d and y = %d\n",x,y);
    printf("x = %d and y = %d z = %.2f\n",x,y,z);

    printf("x + y = %d",result);

    return 0;
}
