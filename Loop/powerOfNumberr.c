#include<stdio.h>
int main(){
    int x,p,ans=1;
    printf("\nEnter the number and power : ");
    scanf("%d %d",&x,&p);
    for (int i = 0; i < p; i++){
        ans *= x;
    }
    printf("ans : %d",ans);
    return 1;
}