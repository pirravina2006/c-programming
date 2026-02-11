#include<stdio.h>
int fibo(int num){
    int fir=0;
    int sec=1;
    int sum=0;
    for(int i=0;i<num;i++){
        printf("%d ",fir);
        sum=fir+sec;
        fir=sec;
        sec=sum;
    }
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    fibo(num);
}