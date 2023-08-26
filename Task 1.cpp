#include<iostream>
using namespace std;
int main()
{
    int guess=rand()%1001;
    int number;
    int count=0;

    while(1)
    {
        count++;
        cout<<"Enter a number between 0 and 1000\n";
        cin>>number;

        if(number==guess)
        break;

        else
        {
            if(number>guess)
                cout<<"Value you have entered is greater than correct value\ntry a smaller value";
            else
                cout<<"Value you have entered is less than correct value\ntry a greater value";

            cout<<endl;
        }

    }

    cout<<"It took you "<<count<<" try/tries to guess the correct value\n";
    cout<<endl<<endl<<endl<<endl;

    return 0;
}