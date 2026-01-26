#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int res=a+b+c;
    if(res==180){
        printf("Valid triangle");
    }
    else{
        printf("Not a valid triangle");
    }
}