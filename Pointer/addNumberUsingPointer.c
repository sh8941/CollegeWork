#include<stdio.h>
int main(){
    int a,b,c;
    int *pa=&a,*pb=&b,*pc=&c;
    printf("\nEnter two numbers : ");
    scanf("%d %d",&a,&b);
    *pc = (*pa)+(*pb);
    printf("\nSum of %d and %d : %d",*pa,*pb,*pc);
    return 1;
}