#include "substance.h"

substance::substance(){
    temperature = 0.0;
}
substance::substance(double temp){
    this-> temperature = temp;
}

    void substance::setTemperature(double temp) {
        temperature = temp;
    }
    double substance::getTemperature()  {
        return temperature;
    }
    bool substance::isEthylFreezing()  {
        return (temperature <= -173);
    }
    bool substance::isEthylBoiling()  {
        return (temperature >= 172);
    }
    bool substance::isOxygenFreezing()  {
        return (temperature <= -362);
    }
    bool substance::isOxygenBoiling()  {
        return (temperature >= -306);
    }
    bool substance::isWaterFreezing()  {
        return (temperature <= 32);
    }
    bool substance::isWaterBoiling()  {
        return (temperature >= 212);
    }