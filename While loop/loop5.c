#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int a;
    int i=1;
    int suc=0;
    int can=0;
    while(i<=num){
        scanf("%d",&a);
        if(a==1 ||a==0){
            if(a==1){
                suc=suc+1;
            }
            else{
                can=can+1;
            }
        }
        else{
            printf("Enter one or two");
        }
        i++;
    }
    printf("Successful orders : %d",suc);
    printf("\nCancelled orders : %d",can);
    if(suc>=can){
        printf("\nSafe");
    }
    else{
        printf("\nRisk");
    }
}