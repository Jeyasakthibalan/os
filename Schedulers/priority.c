#include<stdio.h>
#include<conio.h>
int main(){
 int n;
 int i,j;
 int temp1,temp2;
 printf("enter total number processors?\n");
 scanf("%d",&n);
 long int B[n];
 int P[n];
 int Ps[n];
 int Wt[n];
 int At[n];
 printf("Enter the burst time values you are going to calculate?\n");
 for(i=0;i<n;i++){
    scanf("%d",&B[i]);
    Ps[i]=i+1;
 }
  printf("Enter the priority values you are going to calculate?\n");
 for(i=0;i<n;i++){
    scanf("%d",&P[i]);
 }


 for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(P[i]>P[j]){
              temp1=P[i];
            P[i]=P[j];
            P[j]=temp1;


            temp1=B[i];
            B[i]=B[j];
            B[j]=temp1;

            temp2=Ps[i];
            Ps[i]=Ps[j];
            Ps[j]=temp2;
        }
    }
 }


   printf("Process \t Burst Time \t Priority\n");
 for(i=0;i<n;i++){
    printf("  p%d \t\t  %d  \t\t %d\n",Ps[i],B[i],P[i]);
 }

 float sum1=0;
 float sum2=0;
 float awt;
 float atat;
 Wt[0]=0;
 for(i=0;i<n;i++){

            Wt[i+1]=Wt[i]+B[i];

 }

 printf("Waiting time of each processors are:\n");
 for(i=0;i<n;i++){
    printf("p%d %d\n",Ps[i],Wt[i]);
 }
 for(i=0;i<n;i++){
    At[i]=Wt[i]+B[i];
 }
 printf("Turn around time of each processors are:\n");
 for(i=0;i<n;i++){
    printf("p%d %d\n",Ps[i],At[i]);
 }

 for(i=0;i<n;i++){
   sum1+=Wt[i];
 }
 awt=sum1/n;
printf("\nAverage Waiting Around Time is  %2f\n",awt);


for(i=0;i<n;i++){
   sum2+=At[i];
 }
 atat=sum2/n;
printf("\nAverage Turn Around Time is  %2f\n",atat);

}


