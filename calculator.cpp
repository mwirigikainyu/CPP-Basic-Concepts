#include <iostream>
using namespace std;

void calculate(int value1, int value2, int operand){
    int c;
    switch(operand){
        case 1:
            c = value1 + value2;
            cout<< "Your answer is " <<c << endl;
            break;
        case 2:
            c = value1 - value2;
            cout << "Your answer is " << c << endl;
            break;
        case 3:
            c = value1 * value2;
            cout << "Your answer is " << c << endl;
            break;
        case 4:
            c = value1 /  value2;
            cout << "Your answer is " << c << endl;
            break;
        default:
            cout<< "wrong inputs";
    }
}

int main(){
    int a, b;
    int operand;
    cout<< "Welcome to the Millennial Calculator!"<<endl;
    cout<< "Please enter a first value: "<<endl;
    cin>>a;
    cout<< "Please choose number between:\n 1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide"<<endl;
    cin>> operand;
    cout<< "Please choose a second value: "<<endl;
    cin>>b;

    calculate(a,b,operand);

    return 0;
}