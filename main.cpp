//Calculator with C++

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    while (true) {
    cout << "Hi This is a basic calculator !! Please input any number except 0 \n";
    cout << "Input your 1st number : " << "\n" ;
    double N1;
    cin >> N1;
    cout << "Input your 2nd number : " << "\n" ;
    double N2;
    cin >> N2;
    cout << "Select the operations you want to perform (+,-,*,/) : " << "\n";
    string op;
    cin >> op;
    if (op == "+") {
        cout << "Your Result is: " << N1 + N2 <<"\n" ;
    }
    else if (op == "-") {
        if (N1 > N2) {
        cout << "Your Result is : " << N1 - N2 <<"\n" ;
        }
        else {
            cout << "Your Result is : " << N2 - N1 <<"\n" ;
        }
    }
    
    else if (op == "*") {
        
        cout << "Your Result is : "<< N1*N2 << "\n" ;
    }
    
    else if (op == "/") {
        
        if (N1 == 0 || N2 == 0) {
            
            cout << "Zero Division Error \n" ;
        }
        
        else {
            cout << "Your Result is : " << N1/N2 <<" AND : " << N2/N1 << "\n";
        }
    }
    
    else {
        cout << "You entered wrong value\n" ;
    }
    cout << "You wanna continue (y/n) ??";
    string S1;
    cin >> S1;
    if (S1 == "y") {
        continue;
    }
    else if (S1 == "n") {
        break;
    }
    
    
    }    
}