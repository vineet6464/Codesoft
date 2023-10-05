#include <iostream>
using namespace std;

int main() {
    
    int guess; 
    int secret;
    secret = rand() % 100;
    
    cout<<"The Number Guessing Game!!\n";
    cout<<"Come on let's start!!!\n";
    
    int cnt=0; 
    
    do
    {
        cout<<"\nNow try guessing the number: ";
        cin>>guess;

        if(guess > secret)
        {
            cout<<"Try something smaller.\n";
            cnt++;
        }

        else if(guess < secret)
        {
            cout<<"Try something greater.\n";
            cnt++;
        }

        else if( guess == secret)
        {
            cnt++;
            cout<<"Hurrayy!! You guessed the correct number in "<<cnt<<" attempts.\n";
        }
    }while(guess != secret);
    
    return 0;
}
