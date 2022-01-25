#include <iostream>
using namespace std;


int main(){
    int coordinates[2][5] = {{57, 34,36, 52, 39},{9, 55, 50, 22, 55}};
    string cities[5] = {"Scotland", "Australia", "Algeria", "Netherlands", "Turkey"};

    for (auto x:cities){
        cout<<x<<",";
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 5; j++){
            cout<<endl<<coordinates[i][j];
            // cheating by hardcoding [1]
            cout<<","<<coordinates[1][j];
        }
    }

    return 0;
}