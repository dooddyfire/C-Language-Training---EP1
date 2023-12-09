/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    
    
    //int amount = 121;
    int amount;
    int remain50;
    
    
    printf("Enter your money : ");
    scanf("%d",&amount);
    
    
    printf("amount = %d\n",amount);
    
    
    remain50 = amount % 50; 
    
    int card50 = amount/50;
    
    printf("50 baht card : %d\n",card50);
    printf("remain money after 50 = %d\n",remain50);
    
    
    int card20 = remain50 / 20; 
    int remain20 = remain50 % 20; 
    printf("20 baht card : %d\n",card20);
    
    printf("remain money after 20 : %d\n",remain20);
    

    int card5 = remain20 / 5; 
    int remain5 = remain20 % 5; 
    printf("5 baht card : %d\n",card5);
    
    printf("remain money after 5 : %d\n",remain5);
    
    int card1 = remain5 / 1; 
    int remain1 = remain5 % 1; 
    printf("1 baht card : %d\n",card1);
    
    printf("remain money after 1 : %d\n",remain1); 
    

    return 0;
}
