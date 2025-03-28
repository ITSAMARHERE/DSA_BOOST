#include<iostream>
using namespace std;

int main(){
//     int a =9;
//     if(a==9){
//         cout<< "NINEY" << endl;
//     }
//     if(a> 0){
//     cout << "POSITIVE" << endl;
//     }else{
//         cout << "NEGATIVE" << endl;
//     } 

//-------------------------
 
// int a=2;
// int b=a+1;

// if((a=3)==b){
//     cout << a << endl;
// }else{
//     cout <<a+1 << endl;
// }

//-------------------------

// int a =24;

// if(a>20){
//     cout << "LOVE" << endl;
// }else if(a==24){
//     cout << "YOU" << endl;
// }
// else{
//     cout << "HATE" << endl;
// }

//-------------------------

char ch ;

cout << "Enter a character: " << endl;
cin >> ch;

if(ch>='a'&& ch<='z'){
    cout << "This is LowerCase"<< endl;
}else if(ch>='A'&& ch<='Z'){
    cout << "This is UpperCase" << endl;
}else if (ch>='0'&& ch<='9'){
    cout << "This is numeric" << endl;
}



  }
