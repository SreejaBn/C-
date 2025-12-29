#include <iostream>
using namespace std;
int main(){
    char a, b;
    cout<<"Enter a character: ";
    cin>>a;
    if (a >= 'a' && a<= 'z'){
        cout<<"The character is lowercase.";
    }
    else {
        cout<<"The character is uppercase.";
    }
    
    return 0;
}
