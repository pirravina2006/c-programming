#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n*2-1;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            int top=i;
            int right=j;
            int left=s-j-1;
            int bot=s-i-1;
            int min=n;

            if(top<min){
                min=top;
            }
            if(right<min){
                min=right;
            }
            if(left<min){
                min=left;
            }
            if(bot<min){
                min=bot;
            }
            printf("%d ",n-min);
        }
        printf("\n");
    }
}