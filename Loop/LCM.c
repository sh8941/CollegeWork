#include<stdio.h>
int main(){
    int a,b;
    printf("\nEnter two numbers : ");
    scanf("%d %d",&a,&b);
    int min = (a > b) ? b : a;
    int i = 2;
    for (; i <= min; i++){
        if(a%i == 0 && b%i == 0){
            break;
        }
    }
    printf("\nLCM of %d and %d is %d.",a,b,i);
    return 1;
}