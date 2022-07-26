#include <stdio.h>

int main() {
    int number = 30, sum = 0;
  
    while (number >= -6)
    {
        printf("%d ", number);
        sum += number;
        number -= 3;
    }

    printf("\nThe sum of the sequence is, %d", sum);
}

/*
int number = 30, sum
  
while (number >= -6)
    print(number)
    sum += number
    number -= 3


print("The sum of the sequence is, " sum)
*/