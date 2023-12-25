#include <stdio.h>

int main() {
    int width, height;

    // Input width and height from the user
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter height: ");
    scanf("%d", &height);
    
    int row = 1; 

    // Printing mirror rhombus pattern
    for (int i = 1; i <= height; i++) {
        // Print spaces before stars
        for (int j = 1; j < i; j++) {
            printf(" ");
        }

        // Print stars
        if( i == 1 || i==height){
            for (int j = 1; j <= width; j++) {
                printf("*");
            }            
        }else{
            printf("*");
            for (int j = 1; j <= width-2; j++) {
                printf(" ");
            }               
            printf("*");
        }


        // Move to the next line
        printf("\n");
    }

    return 0;
}