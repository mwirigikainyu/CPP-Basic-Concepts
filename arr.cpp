#include <iostream>
using namespace std;

int main()
{
    int marks[] = {32, 43, 77, 59, 10, 36};

    //search for an element using linear search
    // int size = sizeof(marks) / sizeof(marks[0]);
    // int key = 78;
    // for (int i = 0; i < size; i++){
    //     if (marks[i] == key){
    //         cout<<key <<" is in the array at index " << i <<endl;
    //         return 0;
    //     }
    // }
    // cout << key << " is not in the array" <<endl;

    //find minimim value in an array
    // int minimum = marks[0];
    // for (int i:marks){
    //     if (i < minimum){
    //         minimum = i;
    //     } else {
    //         continue;
    //     }
    // }
    // cout<< minimum;

    //find the maximum value in an array
    // int MaximumValue = 0;
    // for (int i:marks){
    //     if (i > MaximumValue){
    //         MaximumValue = i;
    //     } else{
    //         continue;
    //     }
    // }
    // cout<< MaximumValue <<endl;

    // sum of values in an array
    // int sum = 0;
    // for (auto i:marks){
    //     sum += i;
    // }
    // cout<< endl <<sum;

    //find the size of an array
    // int size = sizeof(marks) / sizeof(marks[0]);
    
    // sum of an array using for loop
    // int total = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     total += marks[i];
    // }
    // cout << total;

    //looping through an array
    // for(int i = 0; i < 6; i++){
    //     cout<<marks[i]<<endl;
    // }

    //looping through an arrray using for each loop
    //create a new variable: that takes each value in the indicated array
    // for (int i: marks){
    //     cout<<i <<endl;
    // }

    //convert type during looping
    // float degrees[3] = {18.3, 21.4, 10.8};
    // for (int degree:degrees){
    //     cout<< degree <<endl;
    // }

    return 0;
}