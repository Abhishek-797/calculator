// calcualtor using switch statement
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout<<"input two no";
    cin>>n1>>n2;
    char op;
    cout<<"input an operator";
    cin>>op;
    switch(op)
    {
        case '+':
        cout << n1+n2 << endl;
        break;
        case '-':
        cout << n1-n2 << endl;
        break;
        case '*':
        cout << n1*n2 << endl;
        break;
        case '/':
        cout << n1/n2 << endl;
        break;
        
        default:
        
        cout << "kahi aur jaake apni maa chudaye" <<endl;
        break;
    }
    return 0;
}