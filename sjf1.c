#include <stdio.h>

int main(){
    //P_id for Process id, Bt for Brust Time, Wt for Waiting Time ,At for Arival Time;
    int P_id[20],Bt[20],Wt[20],At[20],Tat[20],Ct[20],is_completed[20]={0},ATat=0,AWt=0;
    int i,P=0;
    retake:
    printf("How Much Process do You Have-");
    scanf("%d",&P);

    printf("Press TAB to Enter The Process details--\n P_id \tBt\tAt\n");
    for(i=0;i<P;i++){
        printf(" P%d\t",i);
        P_id[i]=i;
        scanf("%d",&Bt[i]);
        scanf("%d",&At[i]);
    }
    int j;
    printf("\nP_id \tBt\tAt\n");
    for(j=0;i>j;j++){
        printf("P%d\t%d\t%d\n",P_id[j],Bt[j],At[j]);
    }
    printf("\nDo You Want To Proceed with These Value \nif Yes Press- 1,Y\nif NO Press- 2,N\n");
    char choice;
    scanf(" %c",&choice);
    while(getchar()!='\n');
    switch(choice){
        case 'N':
        case 'n':
        case '2':
        goto retake;
        break;
        case 'Y':
        case 'y':
        case '1':
        break;
        default:{
            printf("Invalid Option Selected..");
            goto retake;
            break;
        }
    }
    //Impliment Bubble Sort
    int temp;
    for(i=0;i<P-1;i++){
        for(j=0;j<P-i-1;j++){
            if(At[j+1]<At[j]){
                temp=At[j+1];
                At[j+1]=At[j];
                At[j]=temp;

                temp=Bt[j+1];
                Bt[j+1]=Bt[j];
                Bt[j]=temp;

                temp=P_id[j+1];
                P_id[j+1]=P_id[j];
                P_id[j]=temp;
            }
        }
    }
    // sjf Logic
    int current_time=0,completed=0;
    while(completed != P){
        int min_bt=9999999;
        int min_index=-1;

        //find process with minimum brust time among arrived processes
        for(i=0;i<P;i++){
            if(At[i]<= current_time && is_completed[i]==0){
                if(Bt[i]<min_bt){
                    min_bt=Bt[i];
                    min_index=i;
                }
            }
        }
        
        if(min_index != -1){
            current_time += Bt[min_index];
            Ct[min_index]=current_time;
        

        Tat[min_index]=Ct[min_index]-At[min_index];
        Wt[min_index]=Tat[min_index]-Bt[min_index];

        ATat += Tat[min_index];
        AWt += Wt[min_index];

        is_completed[min_index]=1;
        completed++;
        }else{
            current_time++;
        }
    }


    // Print Final Results
    printf("\n-------------------------------------------------\n");
    printf("P_id\tAt\tBt\tCt\tTat\tWt\n");
    printf("-------------------------------------------------\n");
    for(i=0; i<P; i++){
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", P_id[i], At[i], Bt[i], Ct[i], Tat[i], Wt[i]);
    }
    printf("-------------------------------------------------\n");

    // Calculate Average Waiting Time and Turnaround Time
    printf("\nAverage Turnaround Time: %.2f", (float)ATat / P);
    printf("\nAverage Waiting Time: %.2f\n", (float)AWt / P);

    return 0;
}