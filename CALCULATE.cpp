#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    float A,B,FACT;
    string op;
    cout<<"adad ra vared konid:"<<endl;
    cin>>A>>B;
    cout<<"amal riazi mored nazar ra vared konid:"<<endl;
    cin>>op;
    if(op=="-")
        cout<<(A-B)<<endl;
    else if
    (op=="+")
        cout<<(A+B)<<endl;
          else if
    (op=="*")
        cout<<(A*B)<<endl;
          else if
    (op=="/")
        cout<<(A/B)<<endl;
          else if
    (op=="cos")
    A=A*3.14/180;
        cout<<cos(A)<<endl;
    else if
    (op=="sin")
    A=A*3.14/180;
        cout<<sin(A))<<endl;
     else if
    (op=="tan")
    A=A*3.14/180;
        cout<<tan(A))<<endl;
         else if
    (op=="cot")
    A=A*3.14/180;
        cout<<1/tan(A))<<endl;
     else if
    (op=="fact")
    FACT=1;
    for(int i=A;i>0;i--)
        FACT*=i;
    cout<<FACT<<endl;
    return 0;
}





