#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("Equilateral triangle");
    }
    else{
        printf("Not a equilateral triangle");
    }
}