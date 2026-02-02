#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int tar;
    scanf("%d",&tar);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]+a[j]==tar){
                printf("%d %d ",a[i],a[j]);
                count++;
                break;
            }
        }
        if(count==1 ){
            break;
        }
        else{
            printf("No pair");
            break;
        }
    }
}