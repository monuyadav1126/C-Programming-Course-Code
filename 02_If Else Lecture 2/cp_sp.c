#include <stdio.h>
int main()
{
    int cp, sp, profit, Loss;
    printf("Enter the Cost Price : ");
    scanf("%d", &cp);

    printf("Enter the Selling Price : ");
    scanf("%d", &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        printf("There is profit of %d rupees", profit);
    
    }
    else if(sp<cp){
    
        Loss = cp - sp;
        printf("There is Loss of %d rupees", Loss);
    }
    else {
        printf("There is a No Profit and No Loss");
    }
    return 0;
}