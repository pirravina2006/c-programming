#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int first;
    int count=0;
    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]==a[j]){
                first=a[i];
                count++;
                break;
            }
        }
        if(count==1){
            printf("%d",first);
            break;
        }
        else{
            printf("-1");
            break;
        }
    }
}