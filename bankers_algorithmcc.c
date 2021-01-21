//Let there be n processes and m type of resources.

// #include<stdio.h>

// struct bankers {
//     int process, resource_type;
//     // int available[resource_type];
//     // int max[process][resource_type], allocation[process][resource_type], need[process][resource_type];

// }bank; //Need [ i,   j ] = Max [ i,   j ] – Allocation [ i,   j ]


// int safe_state_check() {}

// int main() {
//     printf("Enter number of processes");
//     scanf("%d", &bank.process);
//     printf("\nEnter number of resource types:");
//     scanf("%d", &bank.resource_type);
// }


#include<stdio.h>  


void main()
{
  int process,resource,i,j,instanc,k=0,count1=0,count2=0; //count,k      variables are taken for counting purpose
  printf("\n\t Enter No. of Process:-\n");
  printf("\t\t");
  scanf("%d",&process);                            //Entering No. of Processes
  printf("\n\tEnter No. of Resources:-\n");
  printf("\t\t");
  scanf("%d",&resource);                       //No. of Resources

  int avail[resource],max[process][resource],allot[process][resource],need[process][resource],completed[process];

  for(i=0;i<process;i++)
  completed[i]=0;                             //Setting Flag for uncompleted Process

  printf("\n\tEnter No. of Available Instances\n");

  for(i=0;i<resource;i++)
  {
    printf("\t\t");
    scanf("%d",&instanc);
    avail[i]=instanc;                        // Storing Available instances
  }

  printf("\n\tEnter Maximum No. of instances of resources that a Process need:\n");

  for(i=0;i<process;i++)
  {
    printf("\n\t For P[%d]",i);
    for(j=0;j<resource;j++)
     {
        printf("\t");
        scanf("%d",&instanc);
        max[i][j]=instanc;              
     }
  }    
  printf("\n\t Enter no. of instances already allocated to process of a resource:\n");

  for(i=0;i<process;i++)
  {
    printf("\n\t For P[%d]\t",i);
    for(j=0;j<resource;j++)
     {
        printf("\t\t");
        scanf("%d",&instanc);
        allot[i][j]=instanc;
        need[i][j]=max[i][j]-allot[i][j];       //calculating Need of each process
     } 
 }
printf("\n\t Safe Sequence is:- \t");

 while(count1!=process)
 {
  count2=count1;
  for(i=0;i<process;i++)
  {
    for(j=0;j<resource;j++)
    {
        if(need[i][j]<=avail[j])
          {
            k++;
          }  
    }    
    if(k==resource && completed[i]==0 )
     {
       printf("P[%d]\t",i);
       completed[i]=1;
       for(j=0;j<resource;j++)
         {
           avail[j]=avail[j]+allot[i][j];
          } 
         count1++;
     }
     k=0;
   }

     if(count1==count2)
     {
     printf("\t\t Stop ..After this.....Deadlock \n");
     break;
   } 
 }
 getch();
}           
