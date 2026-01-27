#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    float marks;
    if(mark>0 && mark<100){
        switch(mark/10){
            case 10:
            printf("Grade A");
            break;
            case 9:
            printf("Grade A");
            break;
            case 8:
            printf("Grade B");
            break;
            case 7:
            printf("Grade C");
            break;
            case 6:
            printf("Grade D");
            break;
            case 5:
            printf("Grade E");
            break;
            case 4:
            printf("Grade F");
            break;
            case 3:
            marks=(float)mark;
            marks=mark/10.0;
            if(marks>=3.5 && marks<=3.9){
                printf("Supplementary");
            }
            else{
                printf("Fail");
            }
            break;
            default:
            printf("Fail");
        }
    }
    else{
        printf("Invalid number");
    }
    
}