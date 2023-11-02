#include<iostream>
using namespace std;
int main()
{
    //here i am assuming that user will enter only digit years and the range of the year will not be greater tan 100
    int year1,year2,range,counter,leap_year1=0,leap_year2=0,first2year1,first2year2;//leap_yaer1 and leap_year2 will tell whether the enrterd years by user are leap year or not
    cout<<"enter a range of year ";
    cin>>year1>>year2;
    range=year2-year1;
    first2year1=year1/100;//first 2 digits of year1
    first2year2=year2/100;//first 2 digit of year2

           if(year1%4==0) //this will determine whether the first year entered by user is leap year or not
    {
        if(year1%100==0)
        {
            if(year1%400==0)
                leap_year1=1;
        }
        else
            leap_year1=1;
    }
    if(year2%4==0) //this will determine whether the second year entered by user is leap year or not
    {
        if(year2%100==0)
        {
            if(year2%400==0)
                leap_year2=1;
        }
        else
            leap_year2=1;
    }
    if(range<=4)
    {
        if(leap_year1==1 && leap_year2==1)
            counter=2;
        else if(leap_year1==1 || leap_year2==1)
            counter=1;
        else counter=0;
    }
    if(year1==year2)
    {
        if(leap_year1==1)
            counter=1;
    }

    else if(range<100 &&(first2year1==first2year2))
    {
        if(leap_year1==1 || leap_year2==1)
            counter=(range/4)+1;
        else
            counter=range/4;
    }


    else if(range<100 &&(first2year1!=first2year2))
    {
        if(first2year1%4==0 || first2year2%4==0)
            counter=(range/4)+1;
    }
    else if(range==100)
    {
        if(year1%100==0 && year2%100==0)
        {
            if(leap_year1==1 || leap_year2==1)
                counter=(range/4);
            else
               counter=24;
        }
        else if(first2year1%4==0 || first2year2%4==0)
             counter=(range/4);
        else
            counter=(range/4)-1;

    }



    cout<<"number of leap years(inclusive): "<<counter;


    return 0;

}
