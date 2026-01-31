#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=1;
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            count=0;
            break;
        }
    }
    if(count==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}