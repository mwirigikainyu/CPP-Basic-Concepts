#include <iostream>
using namespace std;

void calculate_discount(double bill){
    if (bill >= 100 && bill <500){
        cout << "You get a 10% discount! Please pay $" << bill - (0.1 * bill) << endl;
    } else if (bill >= 500){
        cout << "You get a 20% discount! Please pay $" << bill - (0.2 * bill) << endl;
    } else {
        cout << "Sorry, no discount for you :( Please pay $" << bill << endl;
    }
}

int main(){
    double bill;
    cout<< "What's your total bill amount?"<<endl;
    cin>>bill;
    calculate_discount(bill);

    return 0;
}