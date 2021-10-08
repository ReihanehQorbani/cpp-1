#include <iostream>
using namespace std;
int main()
{
    string name,family;
    float A,B,C,AVG;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter family:";
    cin>>family;
    cout<<"Enter grades:(grades between 0-20)";
    cin>>A>>B>>C;
    AVG=(A+B+C)/3;
    if
        (AVG<12)
        cout<<"FAIL"<<endl;
    else if
    (AVG>=12&&AVG<17)

        cout<<"Normal"<<endl;
         else if
        (AVG>=17)
        cout<<"GREAT";
    return 0;
}

