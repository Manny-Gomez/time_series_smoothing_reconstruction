#ifndef SIGNAL_PROCESSING_H
#define SIGNAL_PROCESSING_H

#include <vector>
#include <string>

class SignalProcessor {
public:
    SignalProcessor(float smoothingFactor = 0.1f);
    
    std::vector<float> smoothSignal(const std::vector<float>& inputSignal);
    std::vector<float> reconstructSignal(const std::vector<float>& smoothedSignal);
    
    void processFile(const std::string& inputPath, const std::string& outputPath);

private:
    float alpha;  // Smoothing factor for exponential smoothing
};

#endif // SIGNAL_PROCESSING_H
