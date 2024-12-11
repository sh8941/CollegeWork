#include<stdio.h>
int main(){
    int n;
    printf("\nEnter size of array : ");
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr;
    printf("\nEnter %d elements : ",n);
    for (int i = 0; i < n; i++){
        scanf("%d",ptr+i);
    }
    printf("\nEntered elements are : \n");
    for (int i = 0; i < n; i++){
        printf("%d ",*(ptr+i));
    }
    
    return 1;
}