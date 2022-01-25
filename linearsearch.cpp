#include <iostream>

int main(){
    int marks[] = {32, 43, 77, 59, 10, 36};

    //search for an element using linear search
    int size = sizeof(marks) / sizeof(marks[0]);
    int key = 77;
    for (int i = 0; i < size; i++)
    {
        if (marks[i] == key)
        {
            std::cout << key << " is in the array at index " << i <<std::endl;
            return 0;
        }
    }
    std::cout << key << " is not in the array";

    return 0;
}