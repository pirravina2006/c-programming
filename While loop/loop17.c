#include<stdio.h>
int main(){
    int bal;
    scanf("%d",&bal);
    int num;
    scanf("%d",&num);
    int i=1;
    int a;
    int sum=0;
    int count=0;
    while (i<=num){
        scanf("%d",&a);
        sum=sum+a;
        count=count+1;
        if(sum>=bal){
            printf("Purchase completed : %d",count);
            printf("\nFinal balance : %d",sum-bal);
        }
        else{
            count=0;
        }
        i++;
    }
    return 0;
}