#include <stdio.h>
int main()
{
    float unit,chargePerUnit,bill,surbill,surcharge;
    int id;
    char name;
    printf("Enter your Customer ID:");
    scanf("%d",&id);
    
    printf("Enter name:");
    scanf("%c",&name);
    
    printf("Enter units used: ");
    scanf("%f",&unit);

    if (unit < 200)
    {
        chargePerUnit = 16.2;
    }
    else if (unit >= 200 && unit < 300)
    {
        chargePerUnit = 20.1;
    }
    else if (unit >= 300 && unit < 500)
    {
        chargePerUnit = 27.1;
    }
    else 
    {
        chargePerUnit = 35.9;
    }
    bill = unit * chargePerUnit;
    if (bill > 18000)
    {
        surcharge = bill * 0.15;
        surbill = bill +surcharge;
    }
    else
    {
        surcharge = 0;
        surbill = bill;
    }

    printf("CustomerID:%d",id);
    printf("Name:%c",name);
    printf("Consumed:%.1f",unit);
    printf("Amount Charges:%.1f",bill);
    printf("Surcharge Amount:%.1f",surcharge); 
    printf("Amount:%.1f",surbill);
}    