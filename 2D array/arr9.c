#include<stdio.h>
int main(){
    int r,c;
    scanf("%d\n%d",&r,&c);
    int a[r][c];
    int even;
    int odd;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        even=0;
        odd=0;
        for(int j=0;j<c;j++){
            if(a[i][j]%2==0){
                even=even+1;
            }
            else{
                odd=odd+1;
            }
        }
        if(even==odd){
            printf("%d",i);
            break;
        }
        else if(even>odd){
            printf("%d",i);
            break;
        }
    }
}