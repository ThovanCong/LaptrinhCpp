#include<iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

class coin{
    private:
        string sideUp;
    public:
        coin();
        coin(string sideup);
        void toss();
        string getSideUp();
        void display();
};
