#include<stdio.h>
#define sizearr 30
int main() {
    int i=0,j=0,LSize=0;
    int A[sizearr];
    retake :
    printf("\nHow Much Value Do You Have-");
    scanf("%d",&LSize);
    if(LSize<=0){
        printf("invalid Input");
        goto retake;
    }
    //taking inputs
    printf("\nEnter The Values:-");
    for(i=0;i<LSize;i++) {
        scanf("%d",&A[i]);
    }
    //Display 
    printf("\n");
    for(i=0;LSize>i;i++){
        printf("%d ",A[i]);
    }
    //bubble Sort logic 
    int temp=0;//for Swaping values 
    for(i=0;i<LSize-1;i++){
        for(j=0;j<LSize-i-1;j++) {
                if(A[j]>A[j+1]){
                temp =A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("\n");
    for(i=0;LSize>i;i++){
        printf("%d ",A[i]);
    }

    return 0;
}