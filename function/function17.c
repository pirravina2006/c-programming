#include<stdio.h>
int arms(int num){
    int temp=num;
    int rem;
    int res;
    int sum=0;
    while(num!=0){
        res=1;
        rem=num%10;
        for(int i=1;i<=3;i++){
            res=res*rem;
        }
        sum=sum+res;
        num=num/10;
    }
    if(sum==temp){
        printf("Armstrong number");
    }
    else{
        printf("Not armstrong number");
    }
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    arms(num);
}