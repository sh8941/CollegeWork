#include<stdio.h>
int main(){
    int phy,cem,bio,math,com;
    printf("\nEnter marks respectively of Physics, Chemistry, Biology, Math, and Computer : ");
    scanf("%d %d %d %d %d",&phy,&cem,&bio,&math,&com);
    float percent = (phy+cem+bio+math+com)/(float)5;
    if(percent >= 90){
        printf("\nGrade : A, %.2f marks",percent);
    }else if(percent >= 80){
        printf("\nGrade : B, %.2f marks",percent);
    }else if(percent >= 70){
        printf("\nGrade : C, %.2f marks",percent);
    }else if(percent >= 60){
        printf("\nGrade : D, %.2f marks",percent);
    }else if(percent >= 40){
        printf("\nGrade : E, %.2f marks",percent);
    }else{
        printf("\nGrade : F, %.2f marks",percent);
    }
}