#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int m;
    scanf("%d",&m);

    int pow=1;
    if(m<=0){
        printf("1");
    }
    else{
        for(int i=1;i<=num;i++){
            pow=m*pow;
        }
        printf("%d",pow);
    }
    return 0;
}