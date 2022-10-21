#include <stdio.h>
#include <conio.h>

//Calculate if profit or loss and display it

int main()
{
    float cp, sp;
    printf("Enter the cost price\n");
    scanf("%f", &cp);
    printf("Enter the selling price\n");
    scanf("%f", &sp);
    
    if(sp > cp)
    {
        printf("This is a profit of %f\n", sp-cp);
    }
    else if(cp > sp)
    {
        printf("This is a loss of %f\n", cp-sp);
    }
    
    else
    {
        printf("This is breakeven with no profit or loss incurred\n");
        
    }
    
    return 0;
}
