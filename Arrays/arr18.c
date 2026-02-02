#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=1;
    int val=1;
    for(int i=0;i<n;i++){
        if(a[i]<a[i+1]){
            count++;
        }
        else{
            count=1;
        }
        
    }
    if(count>val){
        val=count;
    }
    printf("%d",val);
}