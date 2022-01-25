#include <iostream>
using namespace std;

//recursion

int doMaths(int x){ //3
    int sum = 0;
    // if (x > 0){  
    //     return 
    // }
    return sum;
}

int main(){
    int total = doMaths(2);
    cout<< total;

    if (total == 3)
    {
        cout << "Test passed" << endl;
    }
    else
    {
        cout << "Test Failed" << endl;
    }

    return 0;
}