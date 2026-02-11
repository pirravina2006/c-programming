#include<stdio.h>
int main(){
    int base;
    scanf("%d",&base);
    int pow;
    scanf("%d",&pow);
    int res=1;
    for(int i=1;i<=pow;i++){
        res=res*base;
    }
    printf("%d",res);
    return 0;
}
