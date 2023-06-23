#!/bin/bash

# Create the /tmp/gm_numbers file
echo -e "9\n8\n10\n24\n75\n9" > /tmp/gm_numbers

# Set the appropriate permissions for the file
chmod 777 /tmp/gm_numbers

# Run the Giga Millions program with the specified numbers
./gm 9 8 10 24 75 9
