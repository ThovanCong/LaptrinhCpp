#include "substance.h"

main(){
    double temp;
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> temp;
    substance s(temp);
    cout << "At " << s.getTemperature() << "F, the following substances will freeze and boil:" << endl;
    if (s.isEthylFreezing()) {
        cout << "- Ethyl Alcohol will freeze" << endl;
    }
    if (s.isEthylBoiling()) {
        cout << "- Ethyl Alcohol will boil" << endl;
    }
    if (s.isOxygenFreezing()) {
        cout << "- Oxygen will freeze" << endl;
    }
    if (s.isOxygenBoiling()) {
        cout << "- Oxygen will boil" << endl;
    }
    if (s.isWaterFreezing()) {
        cout << "- Water will freeze" << endl;
    }
    if (s.isWaterBoiling()) {
        cout << "- Water will boil" << endl;
    }
    return 0;

}