#include<stdio.h>
int main(){
    int n,rev=0,cpn;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    cpn = n;
    while (n > 0)
    {
        rev = (rev*10)+n%10;
        n=n/10;
    }
    printf((cpn == rev) ? "\nPalindrome" : "\nNot Palindrome.");
    return 1;
}