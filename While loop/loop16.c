#include<stdio.h>
int main(){
    int w;
    scanf("%d",&w);
    int n;
    scanf("%d",&n);
    int i=1;
    int a;
    int sum=0;
    while(i<=n){
        scanf("%d",&a);
        i++;
        sum=sum+a;
    }
    if(sum>w){
        int res=w/100;
        printf("People Entered : %d",res);
        printf("\nOverload status: Yes");
    }
    else{
        int res=w/100;
        printf("People Entered : %d",res);
        printf("Overload status: No");
    }
    return 0;
}