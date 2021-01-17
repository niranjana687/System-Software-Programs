#include <stdio.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int process_id[n];
    int burst_time[n];
    int priority[n];
    int turnaround_time[n];
    int waiting_time[n];
    int temp = 0, total = 0;
    float avg_wt =0, avg_ta = 0;
    int pos;

    for (int i=0; i < n; i++) {
        printf("For process %d: ", (i+1));
        printf("Burst time: ");
        scanf("%d", &burst_time[i]);
        printf("Priority: ");
        scanf("%d", &priority[i]);
        process_id[i] = i + 1;
    }
    //
    for (int i=0; i < n; i++){
        pos = i;
        for (int j=i+1; j<n; j++) {

             if(priority[j] < priority[pos]) pos = j;
             
        }

        temp = priority[i];
             priority[i] = priority[pos];
             priority[pos] = temp;

             temp = burst_time[i];
             burst_time[i] = burst_time[pos];
             burst_time[pos] = temp;

             temp = process_id[i];
             process_id[i] = process_id[pos];
             process_id[pos] = temp;

    } 
    waiting_time[0] = 0;

    for(int i=1; i<n; i++) {
        waiting_time[i] = 0;
        for(int j=0; j<i; j++) {
            waiting_time[i] += burst_time[j];
            total += waiting_time[i]; 
        }
    }

    avg_wt = total/n;
    total = 0;
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(int i=0; i<n; i++) {
        turnaround_time[i] = burst_time[i] + waiting_time[i];
        total += turnaround_time[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d", process_id[i], burst_time[i], waiting_time[i], turnaround_time[i]);
    }
    avg_ta = total/n;
    printf("\n\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turnaround Time=%f\n",avg_ta);

    return 0;
}