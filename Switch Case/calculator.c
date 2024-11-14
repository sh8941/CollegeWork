#include<stdio.h>
int main(){
    int a,b;
    printf("\nEnter value of a and b : ");
    scanf("%d %d",&a,&b);
    getchar();
    char opr;
    printf("\nEnter operation that you want to perform : ");
    scanf("%c",&opr);
    switch (opr)
    {
    case '+':
        printf("a+b : %d",a+b);
        break;
    case '-':
        printf("a-b : %d",a-b);
        break;
    case '*':
        printf("a+b : %d",a*b);
        break;
    case '/':
        printf("a/b : %f",a/(float)b);
        break;
    
    default:
        break;
    }
}