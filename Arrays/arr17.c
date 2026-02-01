#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int first=a[0];
    int last=a[n-1];
    if(first==last){
        printf("Yes");
    }
    else{
        printf("No");
    }
}