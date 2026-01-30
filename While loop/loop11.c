#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    int i=1;
    int a;
    int sum=0;
    int count=0;
    int sum1=0;
    int sum2=0;
    while(i<=day){
        scanf("%d",&a);
        if(a>2){
            count=count+1;
            sum1=sum1+a;
        }
        else{
            sum2=sum2+a;
        }
        i++;
    }
    int res=sum1+sum2;
    printf("Total days : %d",res);
    printf("\nDelay days : %d",count);
    return 0;
}