#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,disc;
    float x1,x2; //x1 and x2 are the roots
    cout<<"enter the coefficient of x^2: ";
    cin>>a;
    cout<<"enter the coefficient of x: ";
    cin>>b;
    cout<<"enter the constant: ";
    cin>>c;
    disc=pow(b,2)-4*a*c;
    if(disc==0)
    {
        cout<<"the equation only has a single root"<<endl;
        x1= (-b)/(2*a);
        cout<<"root= "<<x1;
    }
    else if(disc>0)
    {
        cout<<"the equation has 2 real roots"<<endl;
        x1=(-b+sqrt(disc))/(2*a);
        x2=(-b-sqrt(disc))/(2*a);
        cout<<"roots are "<<x1<<" and "<<x2;
    }
    else
       cout<<"equation has complex roots";
    return 0;


}
