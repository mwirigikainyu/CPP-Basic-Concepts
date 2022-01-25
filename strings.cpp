#include <iostream>
#include <string>
using namespace std;

int main(){
    // creating a string using character arrays
    // char word[] = {'H', 'i', '\0'};
    // cout << word;

    // char greeting[10] = "Hello";
    // cout << sizeof(greeting);

    // for (int i = 0; i < 10; i++){
    //     cout << greeting[i] <<endl;
    // }

    // getting the full sentence
    // char s[50];
    // std::cout << "Enter your name: ";
    // std::cin.getline(s, 50);
    // std::cout << "Welcome " << s << std::endl;

    // string concatenation
    string s = "Good";
    string m = "Morning";
    // std::cout<<s.append(m);

    // string length
    // string s;
    // std::cout<< "Enter something: ";
    // getline(cin, s);
    // std::cout<<s.length() <<std::endl;

    std::cout<<m.length() << endl;
    std::cout<<m.size() <<endl <<m.capacity();
    m.push_back('z');
    std::cout<<m <<endl;
    m.replace(5, 2, "hi");
    std::cout<<m <<endl;
    m.pop_back();
    std::cout<<m <<endl;
    s.swap(m);
    cout<< s <<" " <<m;

    cout<<endl <<m.rfind("o") <<endl <<m.find("y");

    cout<< endl <<s.substr(2,3);

    //string copy

    return 0;
}