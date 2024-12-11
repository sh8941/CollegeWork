#include<stdio.h>
void swap(int *pa,int *pb){
    int c = *pa;
    *pa = *pb;
    *pb = c;
}
int main(){
    int a=10,b=20;
    printf("\nbefore swap a: %d and b: %d",a,b);
    swap(&a,&b);
    printf("\nafter swap a: %d and b: %d",a,b);
    return 1;
}