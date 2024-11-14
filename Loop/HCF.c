#include<stdio.h>
int main(){
    int a,b;
    printf("\nEnter two numbers : ");
    scanf("%d %d",&a,&b);
    int i = (a > b) ? b : a;
    for (; i > 0; i--){
        if(a%i == 0 && b%i == 0){
            break;
        }
    }
    printf("\nHCF of %d and %d is %d.",a,b,i);
    return 1;
}