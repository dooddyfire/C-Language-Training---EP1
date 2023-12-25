/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    char num_input[20];
    char collect_money_st[20]; 
    
    float goal; 
    float total = 0;
    float money_left;
    float collect_money;
    int day = 1;
    printf("Enter your goal amount : ");
    
    /*
    fgets(num_input,sizeof(num_input),stdin);

    goal = atof(num_input);
    */
    
    scanf("%f",&goal);

    
    while(total < goal){
        
        printf("Enter money collected today : ");
        /*
        fgets(collect_money_st,sizeof(collect_money_st),stdin); 
        collect_money = atof(collect_money_st); 
        */
        
        scanf("%f",&collect_money);
        
        total = total + collect_money;
        
        
        money_left = goal - total; 
        
        if(money_left > 0){
            printf("Total money collected up to day %d is %.2f You need : %.2f more\n",day,total,money_left); 
        }else{
            printf("Congratulation! You take %d to reach the goal",day);
            break;
        }
        
        day = day + 1;
        
    }
    

    return 0;
}