#include<iostream>
using namespace std;

class substance{
    private:
        double temperature;
    public:
        substance();
        substance(double temperature);
        void setTemperature(double temp);
        double getTemperature();
        bool isEthylFreezing();
        bool isEthylBoiling();
        bool isOxygenFreezing();
        bool isOxygenBoiling();
        bool isWaterFreezing();
        bool isWaterBoiling();
        void display();
};