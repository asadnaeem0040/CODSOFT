#include<iostream>
#include<string>
using namespace std;
struct Student
{
    string name;
    double grade;
    int rollNo;
};
int main()
{
    try
    {
        int no;
        cout<<"How many Student record do you want to enter?\n";
        cin>>no;
        if(no<=0)
            throw 0;
        
        Student *arr=new Student[no];
        for(int i=0;i<no;i++)
        {
            cout<<"Enter Name for student "<<i+1<<endl;
            cin>>arr[i].name;

            cout<<"Enter grades for student "<<i+1<<endl;
            cin>>arr[i].grade;

            arr[i].rollNo=i+1;
        }


        Student max=arr[0];
        Student min=arr[0];
        double avg=0;

        for(int i=0;i<no;i++)
        {
            if(max.grade < arr[i].grade)
                max=arr[i];

            if(min.grade > arr[i].grade)
                min=arr[i];

            avg=avg+arr[i].grade;
        }

        avg=avg/no;
        cout<<"Student with highest grades is "<<max.name<<" roll no "<<max.rollNo<<endl;
        cout<<"Student with lowest grades is "<<min.name<<" roll no "<<min.rollNo<<endl;
        cout<<"Average grades are "<<avg<<endl;

        delete[]arr;
        arr=nullptr;
    }
    catch(...)
    {
        cout<<"User has entered an invalid number\n";
    }
    return 0;
}