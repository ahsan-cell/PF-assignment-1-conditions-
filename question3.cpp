#include<iostream>
using namespace std;
int main()
{
    int balance,withdraw,limit,five000notes,one000notes,five00notes,rem;//000 means thousand and 00 means hundred
    cout<<"enter your account balance: ";
    cin>>balance;
    cout<<"enter your daily withdraw limit: ";
    cin>>limit;
    cout<<"enter withdraw amount: ";
    cin>>withdraw;
    if (balance<=0 || withdraw<=0 || limit<=0)
        cout<<"invalid input";
    else if (withdraw>balance)
        cout<<"you dont have enough money in your account";
    else if (withdraw>limit)
        cout<<"withdraw amount exceeds the daily limit";
    else if (withdraw<500)
        cout<<"minimum withdraw amount is 500 Rs";
    else if(withdraw%500!=0)
        cout<<"withdraw amount should be a multiple of 500";
    else
    {withdraw=withdraw-500;//since one 500 note should be given we set ths amount aside
    five000notes=withdraw/5000;//this will give the number of 5000 notes
    rem= withdraw-(five000notes*5000);// we have found the number of 5000 notes so we set these notes aside and the remaining value will be stored in rem
    one000notes=rem/1000;//will determine the numbe of 1000 notes
    rem=rem-(one000notes*1000);//after getting the 1000 notes we set the remaining value aside
    five00notes=(rem/500)+1;//added 1 becausse we had set aside 500 note already in the start
    cout<<"number of 5000 Rs currency notes= "<<five000notes<<endl;
    cout<<"number of 1000 Rs currency notes= "<<one000notes<<endl;
    cout<<"number of 500 Rs currency notes= "<<five00notes<<endl;}

 return 0;
}
