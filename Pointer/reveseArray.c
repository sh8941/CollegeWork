#include<stdio.h>
int main(){
    int arr[5] = {2,4,6,8,10};
    int *sp = arr;  // refer to first element at 0th index
    int *ep = sp+4; // refer to last element at nth-1 index

    // print original array
    printf("\nArray : ");
    for (int i = 0; i < 5; i++){
        printf("%d ",*(sp+i));
    }

    // reversig array using two pointer algorithm
    while (sp < ep){
        int temp = *sp;
        *sp = *ep;
        *ep = temp;
        sp++;
        ep--;
    }
    
    // print reverse array
    sp = arr;  // again point at start index
    printf("\nReverse Array : ");
    for (int i = 0; i < 5; i++){
        printf("%d ",*(sp+i));
    }
    
    
    return 1;
}