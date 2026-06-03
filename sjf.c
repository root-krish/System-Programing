#include <stdio.h>
#define max 30
void main(){
    int i,j,n,temp;
    int Process[max],WaitingTime[max],TurnAroundTime[max],BrustTime[max];
    float AveragaWaitingTime=0,AverageWaitingTime=0;

    printf("Enter The Number of Process:-");
    scanf("%d",&n);
    
    //taking input
    for(i=0;i<n;i++){
        printf("Enter The p%d process Burst Time:-",i);
        scanf("%d",&BrustTime[i]);
        Process[i]=i;
    }

    //Sorting with bubble sort acording to their brust Time
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(BrustTime[j]>BrustTime[j+1]){
                temp=BrustTime[j];
                BrustTime[j]=BrustTime[j+1];
                BrustTime[j+1]=temp;
 
                temp=Process[j];
                Process[j]=Process[j+1];
                Process[j+1]=temp;
            }
        }
    }
    
    //calculation Waiting Time 
    int TotalWaitingTime=0;
    for(i=0;i<n;i++){
        WaitingTime[i]=0;
        WaitingTime[i]=TurnAroundTime[j]+WaitingTime[i];
        TotalWaitingTime+=
    }

    //display output 
    printf("Process\tBrustime\tWaitingtime\tTurnAround Time");
    for(i=0;i<n;i++){
        printf("p%d=%d\n",i,BrustTime[i]);
    }
}