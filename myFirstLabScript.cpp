#include <iostream>
#include <string>

using namespace std;
int main() {

    //Task 1
    string name;
    int ID;

    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<"Hello "+name+"."<<endl;

    cout<<"What is your student ID?"<<endl;
    cin>>ID;
    cout<<"Your ID is "<<ID<<"."<<endl;


    //Task 2
    int var1,var2;
    cout<<"Please enter a value for first variable:";
    cin>>var1;

    cout<<"Please enter a value for second variable:";
    cin>>var2;

    int sum=var1+var2;
    int diff=var1-var2;
    int prod=var1*var2;

    cout<<"\nValue of first variable is:"<<var1<<endl;
    cout<<"Value of second variable is:"<<var2<<endl;
    cout<<"Summation of these variable is:"<<sum<<endl;
    cout<<"Difference of these variable is:"<<diff<<endl;
    cout<<"Multiplication of these variable is:"<<prod<<endl<<endl;


    //Task 3
    string studentName;
    int labGrade,midtermGrade,finalGrade;

    cout<<"Please enter your name:";
    cin>>studentName;
    cout<<"Please enter your lab grade:";
    cin>>labGrade;
    cout<<"Please enter your midterm grade:";
    cin>>midtermGrade;
    cout<<"Please enter your final grade:";
    cin>>finalGrade;

    double lastScore=(labGrade*0.25)+(midtermGrade*0.35)+(finalGrade*0.40);

    cout<<"\nName:"<<studentName<<endl;
    cout<<"Lab: "<<labGrade<<endl;
    cout<<"Midterm: "<<midtermGrade<<endl;
    cout<<"Final: "<<finalGrade<<endl;
    cout<<"Last Score: "<<lastScore<<endl<<endl;


    //Task 4
    cout<<"*\n**\n***\n**\n*";

    return 0;
}
