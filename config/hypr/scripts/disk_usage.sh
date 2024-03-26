#!/bin/bash

# Fetch disk usage information for each drive
drives=(/dev/nvme0n1 /dev/nvme1n1)  # Add paths to your drives here

for drive in "${drives[@]}"; do
    disk_info=$(df -h "$drive" | awk 'NR==2{print $2,$3,$4}')

    # Format disk usage information
    total=$(echo "$disk_info" | cut -d' ' -f1)
    used=$(echo "$disk_info" | cut -d' ' -f2)
    available=$(echo "$disk_info" | cut -d' ' -f3)

    echo "{\"drive\":\"$drive\",\"total\":\"$total\",\"used\":\"$used\",\"available\":\"$available\"}"
done
