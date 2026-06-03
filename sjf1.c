#include <stdio.h>

int main(){
    //P_id for Process id, Bt for Brust Time, Wt for Waiting Time ,At for Arival Time;
    int P_id[20],Bt[20],Wt[20],At[20],Tat[20],ATat=0,AWt=0;
    int i,P=0;
    printf("How Much Process do You Have-");
    scanf("%d",&P);

    printf("Press TAB to Enter The Process details--\n P_id \tBt\tAt\n");
    for(i=0;i<P;i++){
    scanf("%d",&P_id[i]);
    scanf("%d",&Bt[i]);
    scanf("%d",&At[i]);
    }
    int j;
    printf("\nP_id \tBt\tAt\n");
    for(j=0;i>j;j++){
        printf("%d\t%d\t%d\n",P_id[j],Bt[j],At[j]);
    }
    printf("Do You Want To Proceed with These Value \nif Yes Press- 1,Y\nif NO Press- 2,N");
    scanf()

    return 0;
}