#include <stdio.h>

int main() {
    int numbers[5], sum = 0, avg = 0, product = 1;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        product *= numbers[i];
    }

    avg = sum / 5;
    
    
    printf("The sum of these numbers is, %d.\n", sum);
    printf("The product of these numbers is, %d.\n", product);
    printf("the average of these numbers is, %d.\n", avg);
}


/*
int numbers[5], sum, avg, product = 1
    
for (i = 1 to 5)
    print("Enter Number: ")
    input(numbers[i])
    sum += numbers[i]
    
for (i = 1 to 5)
    product *= numbers[i]

avg = sum / 5
    
    
print("The sum of these numbers is, " sum)
print("The product of these numbers is, " product)
print("the average of these numbers is, " avg)
*/
