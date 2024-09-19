#include <stdio.h>
int main()
{
    float cost,saved,discount,discountp;
    printf("Enter price:");
    scanf("%f",&cost);
    if (cost < 2000)
    {
        discount = 0.05;
    }
    else if (cost >=2000 && cost < 4000)
    {
        discount = 0.1;
    }
    else if (cost >= 4000 && cost < 6000)
    {
        discount = 0.2;
    }
    else if (cost >= 6000)
    {
        discount = 0.35;
    }
    else
    {
        printf("discount not applicable");
    }
    saved = cost * discount;
    discountp = cost - saved;

    printf("Your total was:%.1f\n Your total now:%.1f\n Amount saved:%.1f:",cost,discountp,saved);

}