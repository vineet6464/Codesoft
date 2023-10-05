#include <iostream>
#include <string>
using namespace std;

const int max_students = 100;

int main()
{
    string names[max_students]; 
    double marks[max_students]; 
    int cnt;
    double total = 0;
    double max = 0;
    double min = 100;
    
    cout <<"\nThe Student Grade Management System!" << endl;
    cout<<"Type finish to end!\n";
    
    while(cnt < max_students)
    {
        cout<<"\nEnter the name of student"<<cnt+1<<" :";
        cin>>names[cnt];
        
        if(names[cnt] == "finish")
        {
            cout<<endl;  
            break;
        }
        
        cout<<"\nEnter the grade marks of student"<<cnt+1<<" :";
        cin>>marks[cnt];
        
        total += marks[cnt];
        
        if(marks[cnt] > max)
            max = marks[cnt];
        
        if(marks[cnt] < min)
            min = marks[cnt];
        cout<<endl;
        cnt++;
    }
    
    if(cnt == 0)
    {
        cout<<endl<<"No students exists!"<<endl;
        return 0;
    }
    
    double avg = total/cnt;
    cout<<"\nHighest grade marks: "<<max<<endl;
    cout<<"Lowest grade marks: "<<min<<endl;
    cout<<"Average grade marks: "<<avg<<endl;
    
    return 0;
}
