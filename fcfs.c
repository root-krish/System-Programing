#include <stdio.h>

int main(){
    int n,i,process[100],brustTime[100],WaitingTime[100],TurnAroundTime[100];
    printf("Enter The Number of Processes:- ");
    scanf("%d",&n);
    //take input from User
    for(i=0;i<n;i++){
        printf("\nEnter The Process id and Brust Time: ");
        scanf("%d%d",&process[i],&brustTime[i]);
    };

    //calculation for waiting tiem
    WaitingTime[0]=0;
    int TotalWaitingTime=0;
    for(i=1;i<n;i++){
        WaitingTime[i]=0;
        WaitingTime[i]=brustTime[i-1]+WaitingTime[i-1];
        TotalWaitingTime=TotalWaitingTime+WaitingTime[i];
    }
    //calculation For Turnaround Time
    int TotalTurnAroundTime=0;
    for(i=0;i<n;i++){
        TurnAroundTime[i]=0;
        TurnAroundTime[i]=brustTime[i]+WaitingTime[i];
        TotalTurnAroundTime=TotalTurnAroundTime+TurnAroundTime[i];        
    }
    //Avarage Time 
    float AverageWaitingTime=TotalWaitingTime/n;
    float AverageTurnAroundTime=(float)TotalTurnAroundTime/n;
    //Display all
    printf("Process BrustTime Waiting_Time TurnAround_Time ");
    for(i=0;i<n;i++){
        printf("\n%5d %6d %10d %14d",process[i],brustTime[i],WaitingTime[i],TurnAroundTime[i]);
    }
    printf("\nTotal Waiting Time=%d",TotalWaitingTime);
    printf("\nAvrage Turnarund Time=%.2f",AverageTurnAroundTime);
    printf("\nAvrage Waiting Time=%.2f",AverageWaitingTime);
    return 0;
}