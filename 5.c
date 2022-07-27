#include <stdio.h>

int main() {
    float units_consumed = 0, total_bill = 0;

    printf("Enter units consumed: ");
    scanf("%f", &units_consumed);

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
    else if (units_consumed > 200)
    {
        total_bill = units_consumed * 1.5;
    }

    printf("Your electricity bill is, %6.2f", total_bill);
}

/*
    float units_consumed = 0, total_bill = 0

    print("Enter units consumed: ")
    input(units_consumed)

    if(units_consumed <= 50)
        total_bill = units_consumed * 0.5

    else if (units_consumed <= 100)
        total_bill = units_consumed * 0.75

    else if (units_consumed <= 200)
        total_bill = units_consumed * 1.2

    else if (units_consumed > 200)
        total_bill = units_consumed * 1.5

    print("Your electricity bill is, ", total_bill)
*/