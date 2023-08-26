#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    char filename[50];
    cout<<"Enter name of file\n";
    cin.getline(filename,100);

    ifstream fin;
    fin.open(filename);
    if(fin)
    {
        string word;

        int count=0;
        while(fin>>word)
            count++;

        cout<<"There are "<<count<<" words in file "<<filename;
    }
    else
    {
        cout<<filename<<" does not exists\n";
    }

    cout<<endl<<endl<<endl<<endl;
    return 0;
}