#ifndef SAMPLER_WAV_GENERATOR_H
#define SAMPLER_WAV_GENERATOR_H

#include <math.h>
#include <cstdint>

class WavGenerator {
public:
    WavGenerator();

    ~WavGenerator() = default;

    void setup(double frequency, int32_t frameRate);

    void setup(double frequency, int32_t frameRate, float amplitude);

    void render(int16_t *buffer, int channel, int32_t channelStride, int32_t numFrames);

    void render(float *buffer, int channel, int32_t channelStride, int32_t numFrames);

    const void load(const char* filePath);

private:
    int32_t mFrameRate;

    long currentPositionL = 0;
    long currentPositionR = 1;
};

#endif /* SAMPLER_WAV_GENERATOR_H */