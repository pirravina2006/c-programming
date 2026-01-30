#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int bal;
    scanf("%d",&bal);
    int i=1;
    int a;
    int sum=0;
    int days=0;
    int s=0;
    int res;
    while(i<=n){
        scanf("%d",&a);
        if(a>0){
            sum=sum+a;
            days++;
        }
        else{
            s=s+a;
        }
        i++;
    }
    res=bal+sum+s;
    printf("Final balance :%d\n",res);
    printf("Low balance days :%d",days);
    return 0;
}