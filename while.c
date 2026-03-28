#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    while(a>0 && a<11){
        printf("The number is positive\n");
        a++;
    }
    return 0;

}