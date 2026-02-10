#include<stdio.h>
int rev(int num){
    int rem;
    int rev=0;
    for(;num>0;num=num/10){
        rem=num%10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
    return 0;

}
int main(){
    int num;
    scanf("%d",&num);
    rev(num);
}