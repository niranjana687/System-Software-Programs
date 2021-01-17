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
    int temp = 0, avg_wt =0, avg_ta = 0;

    for (int i=0; i < n; i++) {
        printf("Enter burstime and priority of process %d: ", (i+1));

    }
}