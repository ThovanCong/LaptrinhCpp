#include "coin.h"

main(){
    coin c;
    cout << "The side initially facing up is: " << c.getSideUp() << endl;

    int headsCount = 0;
    int tailsCount = 0;
    for (int i = 0; i < 20; i++) {
        c.toss();
        cout << "The side facing up after toss " << (i + 1) << " is: " << c.getSideUp() << endl;
        if (c.getSideUp() == "heads") {
            headsCount++;
        }
        else {
            tailsCount++;
        }
    }

    cout << "The number of times heads was facing up: " << headsCount << endl;
    cout << "The number of times tails was facing up: " << tailsCount << endl;

    return 0;
}