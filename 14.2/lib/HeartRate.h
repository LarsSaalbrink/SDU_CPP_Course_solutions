#ifndef HEARTRATE_H
#define HEARTRATE_H

//Somewhat silly class dictated by assignment,
//a struct, std::pair, array or std::vector would have been sufficient
class HeartRate {
public:
    explicit HeartRate();
    explicit HeartRate(int hr, int time);

    void setHeartRate(int hr);
    void setTime(int time);

    int getHeartRate() const;
    int getTime() const;

private:
    int _hr, _time;
};

#endif // HEARTRATE_H