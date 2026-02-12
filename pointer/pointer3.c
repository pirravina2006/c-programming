#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str,100,stdin);
    char *p=str;
    int len=strlen(str);
    int count=0;
    for(int i=0;i<len && *p!='\0';i++){
        if(*(p+i)=='a'|| *(p+i)=='e'||*(p+i)=='i'|| *(p+i)=='o'||*(p+i)=='u' ||*(p+i)=='A' ||*(p+i)=='E' ||*(p+i)=='I' ||*(p+i)=='O' ||*(p+i)=='U'){
            count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}