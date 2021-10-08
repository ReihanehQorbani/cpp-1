#include <iostream>
using namespace std;
int main()
{
    float height,weight,BMI;
    cout<<"Enter weight:" ;
    cin>>weight;
    cout<<"Enter height:";
    cin>>height;
    BMI=weight/(height*height);
    if
        (BMI<18.5)
        cout<<"UNDERWEIGHT"<<endl;
        else if
            (BMI>=18.5 && BMI<=24.5)
        cout<<"NORMAL"<<endl;
    else if
        (BMI>=25&& BMI<=29.9)
        cout<<"overweight"<<endl;
    else if
        (BMI>=30&& BMI<=34.9)
        cout<<"OBESE"<<endl;
    else if
        (BMI>=35)
        cout<<"EXTREMELY OBESE";
    return 0;
}

