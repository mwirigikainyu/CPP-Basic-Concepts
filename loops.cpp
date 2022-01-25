#include <iostream>
using namespace std;

int main(){
    // for loops
    // int x = 5;
    // for (int i = 0; i <= 5; i++){
    //     cout<< i<<endl;
    // }

    // *while loops
    // int a = 4;
    // while (a >= 0){
    //     cout<<a<<endl;
    //     a--;
    // }

    // *do while loops
    // int y = 3;
    // do {
    //     cout<< y <<endl;
    //     y++;
    // } while(y <= 10);

    // *multiplication table
    // int NUM = 6;
    // for (int i = 0; i <= 10; i++){
    //     cout<< NUM <<" x "<< i << " = "<< NUM*i<<endl;
    // }
    
    //*sum of natural n numbers
    // int num;
    // cout<< "Input any number: "<<endl;
    // cin>> num;
    // int i = 0;
    // int sum = 0;
    // do{
    //     i++;
    //     cout<<sum <<" + " <<i <<" = " <<i+sum <<endl;
    //     sum = i+ sum;
    // } while (i < num);

    //*factorial of n number
    // int num = 6;
    // int sum = 1;
    // for (int i = 1; i <= num;i++){
        // cout<<sum <<" x " <<i <<" = " <<sum * i <<endl;
        // sum = i * sum;
    //     sum *= i;
    // }
    // cout<< "factorial of "<< num << " is " <<sum;

    //find factors of a number n
    int n;
    cout<< "Please provide a number: "<<endl;
    cin>> n; 
    int sum = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            cout<< i<<", ";
            sum += i;
        } 
    }
    // sum is a perfect number, if a sum of the factors of a number are double the number then its a perfect number
    if (sum == n * 2){
        cout<<endl <<sum <<" is a perfect number.";
    }


    return 0;
}