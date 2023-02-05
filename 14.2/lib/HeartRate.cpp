#include "HeartRate.h"

HeartRate::HeartRate() {
    _hr = 0;
    _time = 0;
}
HeartRate::HeartRate(int hr, int time) {
    _hr = hr;
    _time = time;
}

void HeartRate::setHeartRate(int hr) {
    _hr = hr;
}
void HeartRate::setTime(int time) {
    _time = time;
}

int HeartRate::getHeartRate() {
    return _hr;
}
int HeartRate::getTime() {
    return _time;
}