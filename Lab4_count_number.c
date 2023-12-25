#include <stdio.h>
#include <string.h>

int main() {
    char input_num[9];
    int num;
    char check_num_st[9];
    int check_num;
    int count = 0;

    fgets(input_num, sizeof(input_num), stdin);

    fgets(check_num_st, sizeof(check_num_st), stdin);
    check_num = atoi(check_num_st);

    // Use strlen(input_num) - 1 to exclude the newline character
    for (int i = 0; i < strlen(input_num) - 1; i++) {
        // Use input_num[i] instead of atoi(i)
        if (atoi(&input_num[i]) == check_num) {
            count = count + 1;
        }
    }

    if (count == 0) {
        printf("There is 0 '%d' in %s", check_num, input_num);
    } else {
        printf("There is %d '%d' in %s", count, check_num, input_num);
    }

    return 0;
}