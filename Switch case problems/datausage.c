#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    float data;
    scanf("%f",&data);
    switch (type){
        case 1:
        if(data<=1){
            printf("Normal Speed");
        }
        else if(data>1){
            printf("Speed Reduced");
        }
        else{
            printf("Invalid data");
        }
        break;
        case 2:
        if(data<=2){
            printf("Normal Speed");
        }
        else if(data>2){
            printf("Extra changes Applied");
        }
        else{
            printf("Invalid number");
        }
        break;
        default:
        printf("Enter 1 or 2 ");
    }
}