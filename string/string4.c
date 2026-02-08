#include<stdio.h>
int main(){
    char s1[100];
    fgets(s1,sizeof(s1),stdin);
    int count;
    for(int i=0;s1[i]!='\0';i++){
        count=0;
        for(int j=0;s1[j]!='\0';j++){
            if(s1[i]==s1[j]){
                count=count+1;
            }
        }
        if(count==1){
            printf("%c",s1[i]);
            break;
        }
    }
    return 0;
}