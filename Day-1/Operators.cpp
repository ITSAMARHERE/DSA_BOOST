#include<iostream>
using namespace std;

int main() {
    int a = 2/5;
    cout << "Value of a : " << a << endl;

    int b = 2.0/5;
    cout << "Value of b : " << b << endl;
    cout << 2.0/5 << endl;

    float c = 2.0/5;
    cout << "Value of c : " << c << endl;

    //Relational Operators

    int x = 10;
    int y = 20;

    bool result = (x == y);
    cout << "Result : " << result << endl;

    bool result2 = (x > y);
    cout << "Result2 : " << result2 << endl;

    bool result3 = (x < y);
    cout << "Result3 : " << result3 << endl;

    bool result4 = (x >= y);
    cout << "Result4 : " << result4 << endl;

    bool result5 = (x <= y);
    cout << "Result5 : " << result5 << endl;

    bool result6 = (x != y);
    cout << "Result6 : " << result6 << endl;


    //Logical Operators

    int d = 0;
    cout << "Value of d : " << !d << endl;
}  