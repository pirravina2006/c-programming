#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int a;
    scanf("%d",&a);
    int count=0;
    int max=a;
    if(a>5){
        count++;
    }
    while(i<n){
        scanf("%d",&a);
        if(a>max){
            max=a;
        }
        if(a>5){
            count++;
        }
        i++;
    }
    printf("Maxi hour: %d\n",max);
    printf("Surge hours :%d",count);
}