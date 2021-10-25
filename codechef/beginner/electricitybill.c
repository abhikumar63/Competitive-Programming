#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;
    printf("Enter total units consumed: ");
    scanf("%d", &unit);
    if(unit <= 25)
    {
        amt = unit * 1.50;
    }
    else if(unit <= 75)
    {
        amt = 25*1.50 + ((unit-25) * 2);
    }
    else if(unit <= 150)
    {
        amt = 25*1.50 + 75*2 + ((unit-100) * 3.20);
    }
    else
    {
        amt = 25*1.50 + 75*2 + 150*3.20 + ((unit-250) * 1.50);
    }
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}