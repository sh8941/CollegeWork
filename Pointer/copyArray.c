#include<stdio.h>
int main(){
    int arr[5];
    int brr[5];
    int *pa = arr, *pb = brr;
    // take input
    printf("\nEnter 5 elements : ");
    for (int i = 0; i < 5; i++){
        scanf("%d",pa+i);
    }

    // copy elements from arra to brr
    for (int i = 0; i < 5; i++){
        *(pb+i) = *(pa+i);
    }
    

    // print elements of brr
    printf("\nElements are : ");
    for (int i = 0; i < 5; i++){
        printf("%d ",*(pb+i));
    }
    
}