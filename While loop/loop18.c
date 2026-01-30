#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int a;
    int c1=0;
    int c2=0;
    int num;
    scanf("%d",&num);
    while(i<=num){
        scanf("%d",&a);
        if(a>n){
            c1=c1+1;
        }
        else{
            c2=c2+1;
        }
        i++;
    }
    printf("safe hour : %d\n",c2);
    printf("Failure count :%d",c1);
}