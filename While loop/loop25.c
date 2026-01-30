#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int a;
    int num;
    int sum=0;
    scanf("%d",&num);
    while(i<=num){
        scanf("%d",&a);
        sum=sum+a;
        i++;
    }
    if(sum>n){
        printf("Emergency stage : %d\n",i-1);
        printf("Fuel wasted :%d",sum-n);
    }
    else{
        printf("Emergency stage :Not occured\n");
        printf("Fuel wasted : No waste");
    }
}