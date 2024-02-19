#include<iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    if(isalpha(ch)){
        cout << ch <<" is an alphabet.";
    }
    else{
        cout << ch << " is not an alphabet.";
    }
    return 0;
}