# CUDA Time-Series Smoothing and Reconstruction

## Overview
A CUDA-accelerated project to smooth and reconstruct noisy signal data using a moving average kernel and interpolation heuristics.

## Dataset
Test data from: [DSPRelated Sound Examples](https://www.dsprelated.com/freebooks/pasp/Sound_Examples.html)

## How to Run

```bash
chmod +x run.sh
./run.sh


In this CUDA-based signal processing project, we're applying time-series smoothing and signal reconstruction to noisy signal data. The process involves:

Smoothing: A moving average filter (or similar smoothing method) is applied to a signal to reduce noise and smooth out abrupt variations.

Reconstruction: In the case of large variations or missing data, we apply an interpolation method to fill in the gaps and ensure the reconstructed signal follows a more consistent pattern.
