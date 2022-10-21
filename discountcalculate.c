#include <stdio.h>
#include <conio.h>

int main()
{
    //inputs are quantity and price
    // if quantity is more than 1000 then a 10% discount is to be applied on the bill amount
    
    int qty, discount;
    float price, bill;
    
    printf("Enter the item quantity\n");
    printf("=======================================\n");
    scanf("%d", &qty);
    printf("Enter the price\n");
    printf("=======================================\n");
    scanf("%f", &price);
    printf("Buy more than 1000 items to get a 10 percent discount\n");
    printf("=======================================\n");
    
    
    if(qty > 1000)
    {
        bill = (qty*price) - ((qty*price)*0.1);
        printf("=======================================\n");
        printf(" 10 percent Discount applied to the bill amount\n");
        printf("=======================================\n");
        printf("Your bill is %f\n",bill);
    }
    else
    {
        bill = (qty*price);
        printf("=======================================\n");
        printf("Discount not applicable to the bill amount\n");
        printf("=======================================\n");
        printf("Your bill is %f\n",bill);
    }
    
    
    
    return 0;
}
