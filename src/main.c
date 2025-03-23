#include <stdio.h>

void count(int num);

int askInput(void);

int number = 0;
int input = 1;

int main() {
    printf("Hello World\n");

    while (1) {
        printf("Please input until what number you'd like to count: \n");
        scanf("%d", &number);
        count(number);

        printf("\nWould you like to count again? 0 for no, 1 for yes\n");
        askInput();
        if (input == 0) {
            break;
        }
    }
    return 0;
}

int askInput(void) {
    scanf("%d", &input);
    if (input < 0 || input > 1) {
        printf("Please choose again. 0 for no, 1 for yes\n");
        askInput();
    }
    return input;
}

void count(int num) {
    num = number;
    for (int index = 1; index <= num; index++) {
        printf("%d ", index);
    }
}
