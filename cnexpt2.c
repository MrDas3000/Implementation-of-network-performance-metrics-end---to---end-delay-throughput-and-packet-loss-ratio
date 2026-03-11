#include <stdio.h>

int main() {

    int packets_sent, packets_received;
    long packet_size;
    float total_time;
    float trans_delay, prop_delay, proc_delay, queue_delay;
    

    float e2e_delay, throughput, plr;

    printf("--- Network Performance Metrics Calculator ---\n");


    printf("Enter Number of packets sent: ");
    scanf("%d", &packets_sent);
    
    printf("Enter Number of packets received: ");
    scanf("%d", &packets_received);
    
    printf("Enter Packet size (in bits): ");
    scanf("%ld", &packet_size);
    
    printf("Enter Total transmission time (in seconds): ");
    scanf("%f", &total_time);
    
    printf("Enter Transmission delay: ");
    scanf("%f", &trans_delay);
    
    printf("Enter Propagation delay: ");
    scanf("%f", &prop_delay);
    
    printf("Enter Processing delay: ");
    scanf("%f", &proc_delay);
    
    printf("Enter Queuing delay: ");
    scanf("%f", &queue_delay);


    e2e_delay = trans_delay + prop_delay + proc_delay + queue_delay;


    throughput = (float)(packets_received * packet_size) / total_time;


    plr = (float)(packets_sent - packets_received) / packets_sent;


    printf("\n--- Results ---\n");
    printf("End-to-End Delay = %.2f sec\n", e2e_delay);
    printf("Throughput = %.0f bps\n", throughput);
    printf("Packet Loss Ratio = %.2f\n", plr);

    return 0; 
}