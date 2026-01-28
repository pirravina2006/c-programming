#include<stdio.h>
int main(){
    int n1;
    scanf("%d",&n1);
    int n2;
    scanf("%d",&n2);
    int sum=0;
    for(int i=n1;i<=n2;i++){
        if(i%n1==0){
            sum=i+sum;
        }
    }
    printf("%d",sum);
    return 0;
}