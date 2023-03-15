#include "coin.h"

coin::coin(){
    srand(time(0));
        int randNum = rand() % 2;
        if (randNum == 0) {
            sideUp = "heads";
        }
        else {
            sideUp = "tails";
        }
}
coin::coin(string sideup){
    this-> sideUp = sideup;
}
    void coin::toss() { 
        int randNum = rand() % 2;
        if (randNum == 0) {
            sideUp = "heads";
        }
        else {
            sideUp = "tails";
        }
    }
    string coin::getSideUp()  {
        return sideUp;
    }
