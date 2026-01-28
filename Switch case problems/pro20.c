#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int sum=0;
    int res;
    for(int i=1;i<=num;i++){
        res=i*i;
        sum=res+sum;
    }
    printf("%d",sum);
}