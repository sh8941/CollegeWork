#include<stdio.h>
#include<string.h>
int stringLength(char *p){
    int size = 0;
    for (int i = 0; i < 20; i++){
        if (*(p+i) == '\0'){
            break;
        }
        size++;
    }
    return size;
}
int main(){
    char str[20] = "C language";
    char *p = str;
    int size = stringLength(str);
    printf("size of string : %d",size);
    return 1;
}