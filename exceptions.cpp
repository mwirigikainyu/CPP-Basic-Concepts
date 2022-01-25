#include <iostream>
using namespace std;

int average(int arr[], int n){
    if (n == 0){throw string("Array size is Zero");}
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum/n;
}

int main(){
    int arr[] = {4,5,6};
    int n = 3;
    try{
        int rel = average(arr, n);
        cout<<rel<<endl;
    }
    catch(string e){cout<<e<<endl;}
    cout<<"Bye"<<endl;
    

    return 0;
}