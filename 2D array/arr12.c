#include<stdio.h>
int main(){
    int r;
    int c;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int rep;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==a[i][j+1]){
                rep=a[i][j];
            }
        }
        if(rep>1){
            printf("%d",rep);
            break;
        }
    }
    return 0;
}