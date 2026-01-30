#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int i=1;
    int a;
    int count=0;
    int cu=0;
    int lar=0;
    while(i<=num){
        scanf("%d",&a);
        if(a==0){
            count=count+1;
        }
        i++;
    }
    if(count==3 ||count>3){
        printf("Lock triggered at attempt : %d\n",count);
    }
    else{
        printf("Lock triggered attempt :  not locked\n");
    }
    printf("Total failed attempt : %d",lar);
    return 0;
}