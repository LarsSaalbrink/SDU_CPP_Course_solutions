#ifndef HEARTRATE_H
#define HEARTRATE_H

class HeartRate {
public:
    HeartRate();
    HeartRate(int hr, int time);

    void setHeartRate(int hr);
    void setTime(int time);

    int getHeartRate();
    int getTime();

private:
    int _hr, _time;
};

#endif // HEARTRATE_H