#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    int i=1;
    int sum1=0;
    int count=0;
    int sum2=0;
    while(i<=n){
        scanf("%d",&a);
        if(a>=50000){
            sum1=sum1+1;
            count=count+1;
            if(count==3 && sum2==0){
                sum2=i;
            }
        }
        else{
            count=0;
        }
        i++;
    }
    printf("Breakdown at reading  : %d\n",sum2);
    printf("Unsafe reading count : %d ",sum1);
}