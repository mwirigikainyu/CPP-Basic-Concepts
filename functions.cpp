 #include <iostream>
 using namespace std;

 //function template
 template <class T>

 T Max(T x, T y){
    if (x>y){
        return x;
    } else return y;

    // ternary operator of the same operation
    // return a > b ? a : b;

    //ternary operator of 3 values  
    // return a>b && a>c ?a :b>c?b:c;
 }

 int main(){
    int z; 
    float g;
    z = Max(50, 35);
    g = Max(10.5f, 0.5f);
    cout <<z <<endl <<g;

     return 0;
 }