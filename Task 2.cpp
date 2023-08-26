#include<iostream>
using namespace std;
int main()
{
    double a,b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;


    char choice;
    cout<<"Enter \"+\" to add two numbers\n";
    cout<<"Enter \"-\" to subtract two numbers\n";
    cout<<"Enter \"*\" to multiply two numbers\n";
    cout<<"Enter \"/\" to divide two numbers\n";
    cin>>choice;

    if(choice=='+')
        cout<<a<<" + "<<b<<" = "<<a+b;
    else if(choice=='-')
        cout<<a<<" - "<<b<<" = "<<a-b;
    else if(choice=='*')
        cout<<a<<" * "<<b<<" = "<<a*b;
    else if(choice=='/')
        cout<<a<<" / "<<b<<" = "<<a/b;
    else
        cout<<"Invalid option\n";

    cout<<endl<<endl<<endl<<endl;
    return 0;

}