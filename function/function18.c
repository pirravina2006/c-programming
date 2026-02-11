#include<stdio.h>
int gcd(int num1,int num2){
    int k1=0;
    int a1[k1];
    for(int i=1;i<=num1;i++){
        if(num1%i==0){
            a1[k1]=i;
            k1++;
        }
    }
    int k2=0;
    int a2[k2];
    for(int i=1;i<=num2;i++){
        if(num2%i==0){
            a2[k2]=i;
            k2++;
        }
    }
    int gcd;
    for(int i=0;i<k1;i++){
        for(int j=0;j<k2;j++){
            if(a1[i]==a2[j]){
                gcd=a1[i];
            }
        }
    }
    printf("%d",gcd);
    return 0;
}
int main(){
    int num1;
    int num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    gcd(num1,num2);
}