#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int i=1;
    int a;
    int count=0;
    int cu=0;
    int lar=0;
    while(i<=num){
        scanf("%d",&a);
        if(a>20){
            count=count+1;
            cu=cu+1;
            if(cu>lar){
                lar=cu;
            }
        }
        else{
            cu=0;
        }
        i++;
    }
    printf("Congestion minutes : %d\n",count);
    printf("Longest congestion minute : %d",lar);
    return 0;
}