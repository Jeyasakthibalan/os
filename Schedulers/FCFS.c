#include<stdio.h>
#include<conio.h>
int main(){
 int n;
 int i;
 printf("enter total number processors?\n");
 scanf("%d",&n);
 long int B[n];
 int Wt[n];
 int At[n];
 printf("Enter the values you are going to calculate?\n");
 for(i=0;i<n;i++){
    scanf("%d",&B[i]);
 }
    printf("Process \t Burst Time\n");
 for(i=0;i<n;i++){
    printf("  p%d \t\t  %d\n",i,B[i]);
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
    printf("%d\n",Wt[i]);
 }
 for(i=0;i<n;i++){
    At[i]=Wt[i]+B[i];
 }
 printf("Turn around time of each processors are:\n");
 for(i=0;i<n;i++){
    printf("%d\n",At[i]);
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
