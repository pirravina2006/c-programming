#include<stdio.h>
int main(){
    int data;
    scanf("%d",&data);
    int n;
    scanf("%d",&n);
    int i=1;
    int a;
    int count=0;
    int sum1=0;
    int sum2=0;
    while(i<=n){
        scanf("%d",&a);
        if(a>=2){
            count++;
            sum1=sum1+a;
        }
        else{
            sum2=sum2+a;
        }
        i++;
    }
    int res=sum1+sum2;
    int res2=data-res;
    printf("Days used: %d\n",count);
    if(res2>=0){
        printf("Remaining data: %dGB",res2);
    }
    else{
        printf("Remaining data : 0GB");
    }
    
    return 0;
}