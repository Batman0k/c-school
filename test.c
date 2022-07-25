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
    
    
    printf("The sum of these numbers is, %d.", sum);
    printf("The product of these numbers is, %d.", product);
    printf("the average of these numbers is, %d.", avg);
}