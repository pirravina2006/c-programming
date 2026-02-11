#include<stdio.h>
int table(int num){
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",num,i,num*i);
    }
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    table(num);
}