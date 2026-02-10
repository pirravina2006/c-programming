#include<stdio.h>
int prime(int num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count=count+1;
        }
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
}
int main(){
    int num;
    scanf("%d",&num);
    prime(num);
}