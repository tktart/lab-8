#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int x, y, h, m;
    cout << "Enter your age: ";
    cin >> x;
    if(x <= 25){
        cout << "Enter your height: ";
        cin >> y;
        if(y < 100){
            cout << "Your character = Chopper";
        }else if(y >= 100 && y < 180){
            cout << "Your character = Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> m;
            if(m > (1.1*(pow(10,9)))){
                cout << "Your character = Zoro";
            }else{
                cout << "Your character = Sanji";
            }
        }
    }else if(x <= 60){
        cout << "Enter your bounty: ";
        cin >> h;
        if(h > (5*(pow(10,8)))){
            cout << "Your character = Jinbe";
        }else{
            cout << "Your character = Franky";
        }
    }else if (x > 60 ){
        cout << "Your character = Brook";
    }
    return 0;
}










