#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int a;
    int count=0;
    int s=0;
    while(i<=n){
        scanf("%d",&a);
        if(a==0){
            count=count+1;
        }
        else{
            s=s+1;
        }
        i++;
    }
    printf("Inactive weeks: %d",count);
    if(count>=s){
        printf("\nRisk status: high");
    }
    else{
        printf("\nRisk Status:low");
    }
}