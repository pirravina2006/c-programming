#include<stdio.h>
int sum(int num){
    int res=0;
    for(int i=1;i<=num;i++){
        res=res+i;
    }
    printf("%d",res);
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    sum(num);
}