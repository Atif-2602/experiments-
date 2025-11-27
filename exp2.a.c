#include <stdio.h>
// Qureshi Atif Meraj Alam
// F.E
// UIN : 251P004
// Division : C

int main() {
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("It is an Even Number");
    } else {
        printf("It is an Odd Number");
    }

    return 0;
}
