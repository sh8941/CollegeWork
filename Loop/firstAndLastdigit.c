#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    printf("\nNumber : %d",n);
    int first=0,last = n%10;
    while (n > 0)
    {
        first = n;
        n=n/10;
    }
    printf("\nFirst digit : %d last digit : %d",first,last);
    return 1;
}