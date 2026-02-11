#include<stdio.h>
int power(int num,int pow){
    int res=1;
    for(int i=1;i<=pow;i++){
        res=res*num;
    }
    printf("%d",res);
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    int pow;
    scanf("%d",&pow);
    power(num,pow);
}