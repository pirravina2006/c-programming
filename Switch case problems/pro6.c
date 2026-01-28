#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int fact=1;
    for(int i=num;i>1;i--){
        fact=fact*i; 
    }
    printf("%d ",fact);
}