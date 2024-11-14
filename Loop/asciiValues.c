#include<stdio.h>
int main(){
    char c = 1;
    while (c < 127){
        printf("\n%c : %d",c,c);
        c++;
    }
    return 1;
}