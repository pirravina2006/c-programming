#include<stdio.h>
int main(){
    int class;
    scanf("%d",&class);
    int w;
    scanf("%d",&w);
    int am;
    int cal;
    switch(class){
        case 1:
        if(w>=1 && w<=20){
            if(w>=1){
                am=w*300;
                printf("%d",am);
            }
            else{
                printf("Enter weight under 20kg");
            }
        }
        break;
        case 2:
        if(w<=3 && w>0){
            printf("Free");
        }
        else if(w>3 && w<=20){

            w=w-3;
            am=w*300;
            printf("%d",am);
        }
        else{
            printf("Enter valid weight");
        }
        break;
        default:
        printf("Enter class 1 or 2");
    }
}