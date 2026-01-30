#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int cur=0;
    int lar=0;
    int a;
    while(i<=n){
        scanf("%d",&a);
        if(a==0 ||a==1){
            if(a==0){
                cur++;
                if(cur>lar){
                    lar=cur;
                }
            }
            else{
                cur=0;
            }
        }
        i++;
    }
    printf("Longest streak :%d",lar);
}