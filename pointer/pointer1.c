#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Before swapping : %d  %d",a,b);
    int *c=&a;
    int *d=&b;
    int temp=*c;
    *c=*d;
    *d=temp;
    printf("\nAfter swapping : %d  %d",*c,*d);
    return 0;
}
