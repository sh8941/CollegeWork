#include<stdio.h>
int main(){
    int units;
    printf("\nEnter units : ");
    scanf("%d",&units);
    if(units <= 50){
        float amount = (50 * 0.5);
        amount += (amount/5);
        printf("\nTotal amount : %2.f",amount);
    }else if(units <= 150){
        float amount = (50 * 0.75);
        amount += (amount/5);
        printf("\nTotal amount : %2.f",amount);
    }else if(units <= 250){
        float amount = (50 * 1.2);
        amount += (amount/5);
        printf("\nTotal amount : %2.f",amount);
    }else{
        float amount = (50 * 1.5);
        amount += (amount/5);
        printf("\nTotal amount : %2.f",amount);
    }
}