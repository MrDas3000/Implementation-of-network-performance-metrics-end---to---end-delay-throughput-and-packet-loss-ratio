Network Performance Metrics Calculator (C)

A simple C program that calculates important network performance metrics such as:

End-to-End Delay

Throughput

Packet Loss Ratio (PLR)

This tool takes user input for packet statistics and delay parameters, then computes the results based on standard networking formulas.

Overview

In computer networks, measuring performance is essential to understand how efficiently a network is operating.

This program simulates basic network performance analysis by asking the user for packet information and delay components.

The calculator helps in understanding how different delays and packet losses affect overall network performance.


Metrics Calculated
End-to-End Delay

Total time taken for a packet to travel from the sender to the receiver.

Formula

End-to-End Delay = Transmission Delay + Propagation Delay + Processing Delay + Queuing Delay
Throughput

Amount of data successfully received over a network per unit time.

Formula

Throughput = (Packets Received × Packet Size) / Total Time

Unit: bits per second (bps)

Packet Loss Ratio (PLR)

Measures the ratio of packets lost during transmission.

Formula

PLR = (Packets Sent − Packets Received) / Packets Sent
