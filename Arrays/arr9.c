#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[n-1];
    for(int i=n-1;i>0;i--){
        if(a[i]>max){
            max=a[i];
            printf("%d ",max);
        }
        else{
            printf("%d ",max);
        }
    }
    printf("-1");
}