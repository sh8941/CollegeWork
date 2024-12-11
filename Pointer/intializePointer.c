#include<stdio.h>
int main(){
    int n = 28;
    int *ptr = &n;
    printf("\nValue of n : %d",n);
    printf("\nAdress of n : %x",&n);
    printf("\nValue in ptr : %x",ptr);
    printf("\nValue on location : %d",*ptr);
    return 1;
}