#include<stdio.h>
int main(){
    int arr[2][4];
    int *p = &arr[0][0];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d",p+i*2+j);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++){
        printf("\n");
        for (int j = 0; j < 4; j++){
            printf("%d ",*(p+i*2+j));
        }
    }
    
    return 1;
}