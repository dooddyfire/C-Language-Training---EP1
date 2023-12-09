/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int x = 20;   //int(6.38) = 6 
    int y = 3;
    float z = 5.2; 
    
    
    int result = x + y;
    int mult = x * y; 
    int divis = x/y;
    
    
    
    int p_int = x/z; 
    float p = x/z; 
    
    
    //printf("x + y = %d\n",(x+y) );
    //printf("x + y = %d\n",result );
    
    printf("x * y = %d\n",mult);
    printf("x / y = %d\n",divis);
    printf("p int = %d\n",p_int);
    printf("p = %f\n",p);
    
    //printf("p = %d\n",(x/z) ); // rounding error = การปัดเศษ
    
    


    return 0;
}
