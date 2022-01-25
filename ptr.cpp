#include <iostream>
using namespace std;

int main (){
    int num[5] = {2,4,6,8,10};
    for (int i = 0; i < 5; i++){
        cout << num[i] << ", ";
    }
    cout<<endl;

    for (int i = 0; i < 5; i++){
        cout << i[num] << ", ";
    }
    cout<<endl;

    for (int i = 0; i < 5; i++){
        cout << *(num + i) << ", ";
    }

    int *p = num;
    cout<<endl << *p;
    p++;
    cout<<endl <<*p;
    cout<<endl << *(p--);
    cout<<endl << *(p + 2);
    cout<<endl << *(p - 2);

    int *ptr = new int[3];
    cout<<endl <<endl <<*ptr;
    int *ptrs =  &num[2];
    cout<<endl <<*ptrs;
    
    cout<< "***************"<<endl;
    int a = 10;
    int &g = a; //10

    cout << &a;
    cout<<endl <<&g;

    return 0;
}