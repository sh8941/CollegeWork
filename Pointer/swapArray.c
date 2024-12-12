#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int brr[5] = {2,4,6,8,10};
    int *pa = arr;
    int *pb = brr;
    for (int i = 0; i < 5; i++){
        int temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++;
        pb++;
    }
    printf("\n arr: ");
    for (int i = 0; i < 5; i++){
        printf("%d ",arr[i]);
    }
    printf("\n brr: ");
    for (int i = 0; i < 5; i++){
        printf("%d ",brr[i]);
    }
    
}