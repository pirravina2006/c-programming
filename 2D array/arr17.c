#include<stdio.h>
int main(){
    int r;
    int c;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c];
    if(r<=c){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                scanf("%d",&a[i][j]);
            }
        }
        int dia;
        int count=0;
        int sum;
        for(int i=0;i<r;i++){
            sum=0;
            for(int j=0;j<c;j++){
                if(i==j){
                    dia=a[i][j];
                }
                if(a[i][j]!=dia){
                    sum=sum+a[i][j];
                }
            }
            if(dia>sum){
                count++;
            }
        }
        printf("%d ",count);
    }
    else{
        printf("Enter row less than or equal to coulumn");
    }
    return 0;
}