#include<stdio.h>
int main(){
    char s1[20];
    fgets(s1,20,stdin);
    int count;
    int k=0;
    int temp[k];
    int max=0;
    int min=10;
    for(int i=0;s1[i]!='\0';i++){
        count=0;
        for(int j=0;s1[j]!='\0';j++){
            if(s1[i]==s1[j]){
                count=count+1;
            }
        }
        if(count>max){
            max=count;
        }
        if(count<min && min>0){
            min=count;
        }
    }
    int res=max-min;
    printf("%d",res);
}