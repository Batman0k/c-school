#include <stdio.h>

int main() {

    int number = 0;

    printf("Enter a number: ");
    scanf("\n %d", &number);    

    number = number * number * number;
    printf("The cube of your number is, %d", number);
}

/*
int number

print("Enter a number: ")
input(number)

number = number * number * number
print("The cube of your number is, " number)
*/