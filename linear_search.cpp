#include <iostream>
using namespace std;

int search(int arr[],int key){
    for (int i = 0; i<7; i++){
        if (key == arr[i]){
            return i;
        } 
    }
    return -1;
    
}


int main(){
    int marks[7] = {232,532,340,767,128,795,432};
    int key;
    cout<< "Enter an Key to search in the marks this year: ";
    cin>> key;
    int result = search(marks, key);
    if (result < 0){
        cout<<"Key not found in list" <<endl;
    } else cout<<"Key found at index " <<result <<" in the list." <<endl;

    return 0;
}