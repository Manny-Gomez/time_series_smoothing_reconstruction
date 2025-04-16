# CUDA Time-Series Smoothing and Reconstruction

## Overview
A CUDA-accelerated project to smooth and reconstruct noisy signal data using a moving average kernel and interpolation heuristics.

In this CUDA-based signal processing project, we're applying time-series smoothing and signal reconstruction to noisy signal data. The process involves:

Smoothing: A moving average filter (or similar smoothing method) is applied to a signal to reduce noise and smooth out abrupt variations.

Reconstruction: In the case of large variations or missing data, we apply an interpolation method to fill in the gaps and ensure the reconstructed signal follows a more consistent pattern.



Explanation of Input:
Raw Signal: This signal could represent sensor data that fluctuates wildly. For instance:

The values 50.0, 100.0, 1000.0 represent abnormal spikes or outliers (likely noise).

The other values represent typical readings of the signal.

Goal: Our goal is to smooth this signal to remove noise (spikes and high variations) while preserving the main trend of the signal.

Smoothed Output Signal:
After applying the moving average smoothing and signal reconstruction algorithm, we expect to see the high spikes (like the 1000.0 and 100.0) reduced and more consistent values throughout.




Explanation of Output:
Noise Reduction: The large spikes (like 1000.0 and 100.0) have been smoothed out. The algorithm has averaged the surrounding values to reduce the impact of sudden changes in the data.

For example, the 1000.0 value at index 9 is averaged with the neighboring values (like 5.0 and 6.0) to produce a more reasonable value of 5.83.

Reconstruction: The smoothing not only reduces noise but also helps to "fill in" gaps where the signal might have been missing or irregular (such as around the spikes). The reconstructed signal is more consistent and follows the general trend of the original signal.

For instance, values like 50.0 and 100.0 (which are outliers) are "reconstructed" as smoother values (12.67, 31.33, etc.).



## Dataset
Test data from: [DSPRelated Sound Examples](https://www.dsprelated.com/freebooks/pasp/Sound_Examples.html)

## How to Run

```bash
chmod +x run.sh
./run.sh



