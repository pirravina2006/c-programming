#include<stdio.h>
int main(){
    int n1;
    scanf("%d",&n1);
    int sum=0;
    int temp=n1;
    for(int i=1;i<n1;i++){
        if(n1%i==0){
            sum=sum+i;
        }
    }
    if(sum==temp){
        printf("Perfect number");
    }
    else{
        printf("Not a perfect number");
    }
    return 0;
}