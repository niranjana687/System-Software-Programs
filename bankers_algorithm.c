#include<stdio.h>

int main() {

    int process, resource, i, j, instance, k=0, count1=0, count2=0;

    printf("Enter number of processes: ");
    scanf("%d", &process);

    printf("enter number of type of resources: ");
    scanf("%d", &resource);

    int available[resource], max[process][resource], allocation[process][resource], need[process][resource], completed[process];
     //Need [ i,   j ] = Max [ i,   j ] – Allocation [ i,   j ]

     for(i=0; i<process; i++) {
         completed[i] = 0;
     }

    printf("Enter number of available instances\n");

     for(i=0; i<resource; i++) {
         printf("\t\t");
         scanf("%d", &instance);
         available[i] = instance;
     }
     printf("\n\tEnter Maximum No. of instances of resources that a Process need:\n");

     for(i=0; i<process; i++) {
         
         printf("For P[%d]\t", i+1);
         for(j=0; j<resource; j++) {
         scanf("%d", &instance);
         allocation[i][j] = instance;
         need[i][i] = max[i][j] - allocation[i][j];
         }
     }

     printf("\n\t Safe sequence is: ");

    //  while(count1!=process) {

    //      count2 = count1;
    //      for(i=0; i<process; i++) {

    //          for(j=0; j<resource; j++) {

    //              if(need[i][j]<=available[j]) 
    //                 k++;

    //          }

    //          if(k==resource && completed[i]==0) {

    //              printf("P[%d]\t", i);
    //              completed[i] = 1;

    //              for(j=0; j<resource; j++) {

    //                  available[j] = available[j] + allocation[i][j];
    //              } count1++;
    //          } k=0;

    //      }

    //      if(count1==count2) {
    //          printf("Stop after this. Deadlock");
    //          break;
    //      }
    //  }
int n;
 int f[n], ans[n], ind = 0; 
    for (k = 0; k < n; k++) { 
        f[k] = 0; 
    } 






}