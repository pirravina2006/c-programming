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
        printf("Treated patient : %d\n",n);
        printf("Rejected patient : %d",sum-n);
    }
    else{
        printf("Treated patient : %d\n",sum);
        printf("Rejected patient :0");
    }
}