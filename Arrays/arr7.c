#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ceven=0;
    int codd=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            ceven=ceven+1;
        }
        else{
            codd=codd+1;
        }
    }
    printf("Even numbers : %d",ceven);
    printf("\nOdd numbers : %d",codd);
}