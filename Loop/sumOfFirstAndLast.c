#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    int first=0,last = n%10;
    while (n > 0)
    {
        first = n;
        n=n/10;
    }
    printf("\nSum of First and Last : %d",first+last);
    return 1;
}