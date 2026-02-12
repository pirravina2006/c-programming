#include<stdio.h>
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("%d %d",*a,*b);
}
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    swap(&a,&b);
}