#include<stdio.h>
int main(){
    int SP,Cost;
    printf("\nEnter Cost and Selling Price : ");
    scanf("%d %d",&Cost,&SP);
    if (SP > Cost){
        printf("\nProfit By %d",(SP-Cost));
    }else if (SP < Cost){
        printf("\nLoss of %d",(Cost-SP));
    }else{
        printf("\nNo prfit no Loss.");
    }
    
    return 0;
}