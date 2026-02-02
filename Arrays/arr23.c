#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int k=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0];
    if(min<0){
        min=a[k++];
    }
    else{
        min=a[0];
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            if(a[i]<min){
                min=a[i];
            }
        }
    }
    if(min<0){
        printf("%d",min);
    }
    else{
        printf("%d",min);
    }
}