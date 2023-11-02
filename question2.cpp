#include<iostream>
using namespace std;
int main()
{
    int input,r=0;// the status of r variable will determine whether the number is prime or not
    cout<<"enter any number between 1 and 1000(inclusive): ";
    cin>>input;
    if(input==2 || input==3 || input==5 || input==7 || input==11 || input==13 || input==17 || input==19 || input==23 || input==29 || input==31)
       {   //if this condition is true then this means the number is prime the return 0; statement will skip all the statements below and end the program.
          cout<<"number is prime";
          return 0;
          // return 0; statement is usually placed at the end of main() indicating the main is ended here i tricked the complier by placing the return 0 statement early and thus ending the whole program
         // i know we haven't discussed the return 0 statement in class in detail.but this trick is based on the logic that once return 0 statement is encountered by complier it places the program in a '0' state and ends it.This was discussed in class.
       }

    if(input<1 && input>1000)
        cout<<"input invalid";
    if(input%2==0 )//if this is true the number is not prime so we change the status of r
    {
        r++;
        cout<<input<<" is divisible at 2"<<endl;
    }


    if(input%3==0)
    {
        r++;
        cout<<input<<" is divisible at 3"<<endl;
    }

    if(input%5==0)
    {
        r++;
        cout<<input<<" is divisible at 5"<<endl;
    }

    if(input%7==0)
    {
        r++;
        cout<<input<<" is divisible at 7"<<endl;
    }

    if(input%11==0)
    {
        r++;
        cout<<input<<" is divisible at 11"<<endl;
    }

    if(input%13==0)
    {
        r++;
        cout<<input<<" is divisible at 13"<<endl;
    }

    if(input%17==0)
    {
        r++;
        cout<<input<<" is divisible at 17"<<endl;
    }

    if(input%19==0)
    {
        r++;
        cout<<input<<" is divisible at 19"<<endl;
    }

    if(input%23==0)
    {
        r++;
        cout<<input<<" is divisible at 23"<<endl;
    }

    if(input%29==0)
    {
        r++;
        cout<<input<<" is divisible at 29"<<endl;
    }

    if(input%31==0)
    {
        r++;
        cout<<input<<" is divisible at 31"<<endl;
    }

    if(r==0) //if the number was prime it means that it didnt satisfy all the above conditions which means that the status of r was never changed
        cout<<input<<" is  a prime number";
    else
        cout<<input<<" is not a prime number";
    return 0;
}
