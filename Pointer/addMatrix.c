#include<stdio.h>
int main(){
    int a[3][3],b[3][3];
    int *pa=&a[0][0],*pb=&b[0][0];
    printf("\nEnter elements for first 3x3 matrix : ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d",pa+i*3+j);
        }
    }
    printf("\nEnter elements for second 3x3 matrix : ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d",pb+i*3+j);
        }
    }
    printf("\nSum: \n");
    for (int i = 0; i < 3; i++){
        printf("\n");
        for (int j = 0; j < 3; j++){
            printf("%d ",*(pa+i*3+j)+*(pb+i*3+j));
        }
    }
    
    
    return 1;
}