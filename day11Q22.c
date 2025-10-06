#include<stdio.h>
int main () {
        int profit,loss,selling_price,cost_price,profitpercentage,losspercentage;
        printf("enter selling price,cost price:");
        scanf("%d", &selling_price);
        scanf("%d", &cost_price);
        profit=selling_price-cost_price;
        profitpercentage=profit*100/cost_price;
        loss=cost_price-selling_price;
        losspercentage=loss*100/cost_price;    
        if(profitpercentage>0)
            printf("profit is %d",profitpercentage);
        else if(profitpercentage<0){
            printf("loss is %d",losspercentage);
        } 
        else
            printf("no profit no loss");
        return 0;
}