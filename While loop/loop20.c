#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n;
    int i=1;
    int p,c;
    int dr=0;
    int count=0;
    int cr=-1;
    while(i<=a){
        scanf("%d",&c);
        if(c<p){
            dr=dr+1;
            count=count+1;
        }
        else{
            count=0;
        }
        if(count==3 && cr==-1){
            cr=i;
        }
        p=c;
        i++;
    }
    if(cr>-1){
        printf("Crash days :%d",cr);
    }
    else{
        printf("No crash detected");
    }
    printf("Total drops : %d",dr);
}
