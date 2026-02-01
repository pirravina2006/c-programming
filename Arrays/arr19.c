#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count;
    int uni=0;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count=count+1;
            }
        }
        if(count==1){
            uni=uni+1;
        }
    }
    printf("%d",uni);
}