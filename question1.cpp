#include<iostream>
using namespace std;
int main()
{
    int input1,input2;
    cout<<"1-Rock,2-Paper,3-scissors"<<endl;
    cout<<"enter the input of both players(sequentially): ";//input here will be in the form of integer such that first value will be of player 1 and second of player 2
    cin>>input1>>input2;
    if (input1<1 || input2<1 || input1>3 || input2>3)
        cout<<"invalid input";
    else if (input1==input2)
        cout<<"Draw";
    else if(input1==1 && input2==2)
        cout<<"second player wins ";
    else if (input1==2 && input2==3)
        cout<<"second player wins";
    else if(input1==1 && input2==3)
        cout<<"first player wins";
    else if (input1==2 && input2==1)
        cout<<"first player wins";
    else if(input1==3 && input2==2)
        cout<<"first player wins";
    else if(input1==3 && input2==1)
        cout<<"second player wins";
    return 0;
}
