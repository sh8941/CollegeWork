#include<stdio.h>
int main(){
    int arr[10];
    int *pa = arr,key;
    // take input elements
    printf("\nEnter 10 elements of array : ");
    for (int i = 0; i < 10; i++){
        scanf("%d",pa+i);
    }
    printf("\nEnter element to find in array : ");
    scanf("%d",&key);
    // seraching input element
    for (int i = 0; i < 10; i++){
        if (key == *(pa+i)){
            printf("\nElement exist on index %d",i);
            return 1;
        }    
    }
    printf("\nElement not found in array");
    return 1;
}