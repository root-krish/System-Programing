#include <stdio.h>

int main (){
    //int get_val;
    char get_val;
    retake : 
    printf("Enter The Value-");
    //scanf("%d",&get_val);
    scanf(" %c",&get_val);
    //This Line will be Clear The Buffer
    while(getchar()!= '\n');
    switch(get_val){
        case '1':
        case 'y':
        case 'Y':
        printf("\nyessss");
        break;
        case '2':
        case 'N':
        case 'n':
        printf("\nNoooooo");
        break;
        default:{
            printf("invalid option ");
            goto retake;
            break;
        }
    }
}