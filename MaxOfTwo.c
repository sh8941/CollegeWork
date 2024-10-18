#include<stdio.h>
int main(){

    int a,b;
    printf("\nEnter two numbers : ");
    scanf("%d %d",&a,&b);
    if (a > b){
        printf("\n%d is greater than %d",a,b);
    }else if(a < b){
        printf("\n%d is greater than %d",b,a);
    }else{
        printf("\n%d and %d both are equal",a,b);
    }
    
    return 0;
}