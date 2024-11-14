#include<stdio.h>
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    int a=0,b=1,c=0;
    for (int i = 0; i < n; i++){
        printf("\n%d",a);
        a = b;
        b = b+c;
        c = a;
    }
    
}