#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int Speed, Hours, Distance = 0;

    cout << "Toc do cua chiec xe la:";
    cin >> Speed;
    
    while (Speed < 0)
    {
        cout << "Vui long nhap lai:";
        cin >> Speed;
    }
    


    cout << "so thoi gian chiec xe do da di la:";
    cin >> Hours;

    if(Speed >= 0 && Hours >= 1){

        cout << "Quang duong da di la:\n "
          << "------------------------\n";

        for(int X=1; X<=Hours; X++){
            Distance += Speed;
            cout << right << setw(4) << X <<"    ";
            cout << setw(6) << Distance << endl;
        }
    }
    return 0;
}
