#include<iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter the value of a: " << endl;
    cin >> a;

    if(a>0){
        cout << "Postive" << endl;
    }
    else if(a<0){
        cout << "Negative" << endl;
    }else{
        cout << "Zero" << endl;
    }
}