#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char op;
    
    cout<<" Simple Calculator!\n";
    
    cout<<"Enter the first number: ";
    cin>>a;
    
    cout<<"Enter the second number: ";
    cin>>b;
    
    cout<<"Choose 1: \n1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\n\n";
    cin>>op;
    
    switch(op)
    {
        case '+':
            cout<<a<<" + "<<b<<" = "<<a+b;
            break;
        case '-':
            cout<<a<<" - "<<b<<" = "<<a-b;
            break;
        case '*':
            cout<<a<<" * "<<b<<" = "<<a*b;
            break;
        case '/':
            cout<<a<<" / "<<b<<" = "<<a/b;
            break;
        default:
            cout<<"Invalid operator!";
            break;
    }
    return 0;
}
