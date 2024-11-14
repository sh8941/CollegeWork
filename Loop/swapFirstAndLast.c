#include<stdio.h>
int firstDigit(int n){
    int first = 0;
    while (n > 0)
    {
        first = n = n/10;
    }
    return first;
}
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    printf("\nEntered Number : %d",n);
    int first=firstDigit(n),last = n%10;
    while (n > 0)
    {
        last = (last*10) + firstDigit(n);
        n=n/10;
    }
    last = (last*10)+first;
    printf("\nSwapped : %d",last);
    return 1;
}