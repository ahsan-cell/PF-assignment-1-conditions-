#include<iostream>
using namespace std;
int main()
{
    //i am assuming that the user will enter a valid date from 1/1/1900 to 12/31/2500
    // a part of this program is taken from question no. 8 of assignment so we can find the leap years in a range of years
 int range,day,month,year1,year2,numofDays=0,numofYears,first2year1,first2year2,leap_year1,leap_year2,counter=0;
 // first2year1 (first 2 digits of year1 which is predetermined in this case)
 //first2year2 (first 2 digits of year2 which is entered my user)
 cout<<"enter a date in the format(month day year) ";
 cin>>month>>day>>year2;
 first2year2=year2/100;
 if(first2year2==19)
    year1=1900;
 else if(first2year2==20)
    year1=2000;
 else if(first2year2==21)
    year1=2100;
 else if(first2year2==22)
    year1=2200;
 else if(first2year2==23)
    year1=2300;
 else if(first2year2==24)
    year1=2400;
 else if(first2year2==25)
    year1=2500;
 range=year2-year1;
 first2year1=year1/100;
 numofYears=range;

// in question 8 i assumed that the user will enter 2 years whose range will not be greater than 100 years
// in this program year1 is pre determined by us depending on the year2 enter by user
//e.g if user enters year 2021 we will find its leap years and day with reference to 2000
//in case of 1920 we will take 1900 the reference and etc.
//from here starts the code of question 8 (with slight modifications)

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
    // the code of question8 ends here
 // counter variable holds the value of passed leap years

    // now we calculate the number of days passed
     if(month==1)
       numofDays=(day-1)+(numofYears*365);
  //day-1 is used because lets say on 1 january the day passed will not be 1 but it will be zero because its the first day of year

    else if(month==2)
       numofDays=31+(day-1)+(numofYears*365);
       // we will multiply numofYears by 365 for now and we will factor in the leap years later

    else if(month==3)
        numofDays=59+(day-1)+(numofYears*365);
    else if(month==4)
            numofDays=90+(day-1)+(numofYears*365);
    else if(month==5)
        numofDays=120+(day-1)+(numofYears*365);
    else if (month==6)
        numofDays=151+(day-1)+(numofYears*365);
    else if(month==7)
        numofDays=181+(day-1)+(numofYears*365);
    else if(month==8)
        numofDays=212+(day-1)+(numofYears*365);
    else if(month==9)
        numofDays=243+(day-1)+(numofYears*365);
    else if(month==10)
        numofDays=273+(day-1)+(numofYears*365);
    else if(month==11)
        numofDays=304+(day-1)+(numofYears*365);
    else
        numofDays=334+(day-1)+(numofYears*365);
//now we factor in the leap years
//counter holds number of leap year
numofDays=numofDays+counter;




    if(year1==1900 || year1==2300)    //the 20th and 24th century have the same calendars
    {
        // in question 8 of assignment we find the number of leap years in a given range inclusive
        // lets say the user enter a date of 1 /30/ 1904 the q8 code will give number of leap years =1 which we have added in numofDays but it can be clearly seen
        //that the date 1/30/1904 has not crossed the 29 feb mark which means we cant add the extra day just yet so to tackle this we created 2 separate if blocks

        if(month<=2 && leap_year2==1)
        {
        if(numofDays%7==0)
        cout<<"day= Sunday";
       else if(numofDays%7==1)
        cout<<"day = Monday";
       else if(numofDays%7==2)
        cout<<"day= Tuesday";
       else if(numofDays%7==3)
        cout<<"day= Wednesday";
       else if(numofDays%7==4)
        cout<<"day= Thursday";
       else if(numofDays%7==5)
        cout<<"day=Friday";
       else if(numofDays%7==6)
        cout<<"day= Saturday";

        }
        else if(numofDays%7==0)// when reminder is zero the day will be monday because the day on 1/1/1900 is monday. in the above if block (if(month<=2 && leap_year2==1))  we just shift the days forward by 1
        cout<<"day= Monday";
       else if(numofDays%7==1)
        cout<<"day = Tuesday";
       else if(numofDays%7==2)
        cout<<"day= Wednesday";
       else if(numofDays%7==3)
        cout<<"day= Thursday";
       else if(numofDays%7==4)
        cout<<"day= Friday";
       else if(numofDays%7==5)
        cout<<"day= Saturday";
       else if(numofDays%7==6)
        cout<<"day= Sunday";
    }
    else if(year1==2000 || year1==2400) // the 21st and 25th century has the same calenders
    {   if(month<=2 && leap_year2==1)
         {
       if(numofDays%7==0)
        cout<<"day= Friday";
       else if(numofDays%7==1)
        cout<<"day = Saturday";
       else if(numofDays%7==2)
        cout<<"day= Sunday";
       else if(numofDays%7==3)
        cout<<"day= Monday";
       else if(numofDays%7==4)
        cout<<"day= Tuesday";
       else if(numofDays%7==5)
        cout<<"day= Wednesday";
       else if(numofDays%7==6)
        cout<<"day= Thursday";

         }


         else if(numofDays%7==0) // when reminder is zero the day will be saturday because the day on 1/1/2000 is saturday.
        cout<<"day= Saturday";
       else if(numofDays%7==1)
        cout<<"day = Sunday";
       else if(numofDays%7==2)
        cout<<"day= Monday";
       else if(numofDays%7==3)
        cout<<"day= Tuesday";
       else if(numofDays%7==4)
        cout<<"day= Wednesday";
       else if(numofDays%7==5)
        cout<<"day= Thursday";
       else if(numofDays%7==6)
        cout<<"day= Friday";
    }
    if(year1==2100||year1==2500)
      {


        if(month<=2 && leap_year2==1)
        {
            if(numofDays%7==0)
        cout<<"day= Thursday";
       else if(numofDays%7==1)
        cout<<"day = Friday";
       else if(numofDays%7==2)
        cout<<"day= Saturday";
       else if(numofDays%7==3)
        cout<<"day= Sunday";
       else if(numofDays%7==4)
        cout<<"day= Monday";
       else if(numofDays%7==5)
        cout<<"day= Tuesday";
       else if(numofDays%7==6)
        cout<<"day= Wednesday";
        }
       else if(numofDays%7==0) // when reminder is zero the day will be friday because the day on 1/1/2100 is friday.
        cout<<"day= Friday";
       else if(numofDays%7==1)
        cout<<"day = Saturday";
       else if(numofDays%7==2)
        cout<<"day= Sunday";
       else if(numofDays%7==3)
        cout<<"day= Monday";
       else if(numofDays%7==4)
        cout<<"day= Tuesday";
       else if(numofDays%7==5)
        cout<<"day= Wednesday";
       else if(numofDays%7==6)
        cout<<"day= Thursday";
      }
      if(year1==2200)
      {
          if(month<=2 && leap_year2==1)
          {
        if(numofDays%7==0)
        cout<<"day= Tuesday";
       else if(numofDays%7==1)
        cout<<"day = Wednesday";
       else if(numofDays%7==2)
        cout<<"day= Thursday";
       else if(numofDays%7==3)
        cout<<"day= Friday";
       else if(numofDays%7==4)
        cout<<"day= Saturday";
       else if(numofDays%7==5)
        cout<<"day= Sunday";
       else if(numofDays%7==6)
        cout<<"day= Monday";
          }
       else if(numofDays%7==0)
        cout<<"day= Wednesday";
       else if(numofDays%7==1)
        cout<<"day = Thursday";
       else if(numofDays%7==2)
        cout<<"day= Friday";
       else if(numofDays%7==3)
        cout<<"day= Saturday";
       else if(numofDays%7==4)
        cout<<"day= Sunday";
       else if(numofDays%7==5)
        cout<<"day= Monday";
       else if(numofDays%7==6)
        cout<<"day= Tuesday";
      }





 return 0;




}


