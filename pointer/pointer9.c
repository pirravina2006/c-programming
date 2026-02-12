#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int tar;
    scanf("%d",&tar);
    int *p=arr;
    int res=-1;
    for(int i=0;i<n;i++){
        if(*(p+i)==tar){
            res=i;
        }
    }
    if(res!=-1){
        printf("%d",res);
    }
    else{
        printf("-1");
    }
}