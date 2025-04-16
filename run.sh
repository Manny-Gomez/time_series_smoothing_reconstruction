
#!/bin/bash

echo "Compiling..."
make

echo "Creating output directory..."
mkdir -p output

echo "Running smoothing and reconstruction..."
./signal_proc > log.txt

echo "Done. Output saved in output/ and log.txt"
