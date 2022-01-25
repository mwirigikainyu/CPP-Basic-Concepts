#include <iostream>
using namespace std;

enum file
{
    New,
    Open,
    Add,
    Save,
    Close
};

int main()
{
    int input;
    cout << "What would you like to do with your file?" << endl;
    cin >> input;
    switch (input)
    {
    case New:
        cout << "New File Created" << endl;
        break;
    case Open:
        cout << "File Opened" << endl;
        break;
    case Add:
        cout << "File Added" << endl;
        break;
    case Save:
        cout << "File Saved" << endl;
        break;
    case Close:
        cout << "File Closed" << endl;
        break;
    default:
        cout << "Choose option between 1 - 5" << endl;
    }

    return 0;
}