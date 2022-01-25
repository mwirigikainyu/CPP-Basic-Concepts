#include <iostream>
using namespace std;

int main(){
    int size, average, sum;
    int MyNumbers[100];
    cout<<"Enter the numbers of the element:";
    cin>>size;

    for (int i = 0; i < size; i++){
        cout<<"Enter number: ";
        cin>>MyNumbers[i];
        sum += MyNumbers[i];
    }
    average = sum/size;
    cout<<"Your Average is: " << average << endl;

    return 0;
}