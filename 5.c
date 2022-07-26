#include <stdio.h>

int main() {
    int units_consumed = 0, total_bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units_consumed);

    if(units_consumed <= 50)
    {
        total_bill = units_consumed * 0.5;
    }
    else if (units_consumed <= 100)
    {
        total_bill = units_consumed * 0.75;
    }
    else if (units_consumed <= 200)
    {
        total_bill = units_consumed * 1.2;
    }


    prinft("Your electricity bill is, %d", total_bill)
}