#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int a;
    int n2;
    int sum=0;
    int count=0;
    scanf("%d",&n2);
    int rem;
    while(i<=n2){
        scanf("%d",&a);
        sum=sum+a;
        count=count+1;
        if(sum>n){
            count=count-1;
            int rem=n-sum;
        }
        i++;
    }
    printf("Successful withdrawal : %d",count);
    printf("\nBalance cash : %d",rem);
}