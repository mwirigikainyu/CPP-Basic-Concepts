#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 4, c;

    try
    {
        if (b == 0)
            throw 10;
        c = a / b;
        cout << c;
    }
    catch (int e)
    {
        cout << "Division by Zero. Error Code " << e << endl;
    }

    return 0;
}