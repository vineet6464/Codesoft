#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int word_count(string text)
{
    int count=0;
    stringstream total (text);
    string word;

    while (total >> word)
    {
        count++;
    }

    return count;
}

int main()
{
    string File;
    cout << "Enter the name of the file with extension: ";
    getline (cin, File);

    ifstream file(File);

    if (!file)
    {
        cout << "Error!! This file is not opening, please enter proper file name." << "\n";
    }

    string content;
    string line;

    while (getline(file, line))
    {
        content += line + "";
    }

    int wordCount = word_count(content);

    cout<<"Total words in this file are: " <<wordCount << "\n";
    file.close();

    return 0;
}
