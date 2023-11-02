#include<iostream>
using namespace std;
int main()
{
    int input,firstDigit,secondDigit;
    cout<<"enter the amount in digits: ";
    cin>>input;
    // i am assuming that user will enter a number between 1 and 100 (inclusive)
    if(input==100)
        cout<<"Hundred Only";
    else
    {
        firstDigit=input/10;
        secondDigit=input%10;
        if(firstDigit==0)
        {
            if(secondDigit==1)
                cout<<"One only";
            else if (secondDigit==2)
                cout<<"Two only";
            else if (secondDigit==3)
                cout<<"Three only";
            else if (secondDigit==4)
                cout<<"Four only";
            else if(secondDigit==5)
                cout<<"Five only";
            else if(secondDigit==6)
                cout<<"Six only";
            else if(secondDigit==7)
                cout<<"Seven only";
            else if(secondDigit==8)
                cout<<"Eight only";
            else if (secondDigit==9)
                cout<<"Nine only";
        }
        else
        {
            if(input>9 && input <=19)
          {


            if(input==10)
              cout<<"Ten only";
            else if(input==11)
                cout<<"Eleven only";
            else if(input==12)
                cout<<"Twelve only";
            else if (input==13)
                cout<<"Thirteen only";
            else if(input==14)
                cout<<"Fourteen only";
            else if(input==15)
                cout<<"Fifteen only";
            else if(input==16)
                cout<<"Sixteen only";
            else if (input==17)
                cout<<"Seventeen only";
            else if(input==18)
                cout<<"Eighteen only";
            else if(input==19)
                cout<<"Nineteen only";}

            else if(firstDigit==2)
            {
                if(secondDigit==1)
                cout<<"Twenty One only";
            else if (secondDigit==2)
                cout<<"Twenty Two only";
            else if (secondDigit==3)
                cout<<"Twenty Three only";
            else if (secondDigit==4)
                cout<<"Twenty Four only";
            else if(secondDigit==5)
                cout<<"Twenty Five only";
            else if(secondDigit==6)
                cout<<"Twenty Six only";
            else if(secondDigit==7)
                cout<<"Twenty Seven only";
            else if(secondDigit==8)
                cout<<"Twenty Eight only";
            else if (secondDigit==9)
                cout<<"Twenty Nine only";
            else if (secondDigit==0)
                 cout<<"Twenty only";

            }
            else if (firstDigit==3)
            {
               if(secondDigit==1)
                cout<<"Thirty One only";
            else if (secondDigit==2)
                cout<<"Thirty Two only";
            else if (secondDigit==3)
                cout<<"Thirty Three only";
            else if (secondDigit==4)
                cout<<"Thirty Four only";
            else if(secondDigit==5)
                cout<<"Thirty Five only";
            else if(secondDigit==6)
                cout<<"Thirty Six only";
            else if(secondDigit==7)
                cout<<"Thirty Seven only";
            else if(secondDigit==8)
                cout<<"Thirty Eight only";
            else if (secondDigit==9)
                cout<<"Thirty Nine only";
            else if (secondDigit==0)
                 cout<<"Thirty only";
            }


            else if(firstDigit==4)
            {
                if(secondDigit==1)
                cout<<"Forty One only";
            else if (secondDigit==2)
                cout<<"Forty Two only";
            else if (secondDigit==3)
                cout<<"Forty Three only";
            else if (secondDigit==4)
                cout<<"Forty Four only";
            else if(secondDigit==5)
                cout<<"Forty Five only";
            else if(secondDigit==6)
                cout<<"Forty Six only";
            else if(secondDigit==7)
                cout<<"Forty Seven only";
            else if(secondDigit==8)
                cout<<"Forty Eight only";
            else if (secondDigit==9)
                cout<<"Forty Nine only";
            else if (secondDigit==0)
                 cout<<"Forty only";
            }
            else if(firstDigit==5)
            {
                if(secondDigit==1)
                cout<<"Fifty One only";
            else if (secondDigit==2)
                cout<<"Fifty Two only";
            else if (secondDigit==3)
                cout<<"Fifty Three only";
            else if (secondDigit==4)
                cout<<"Fifty Four only";
            else if(secondDigit==5)
                cout<<"Fifty Five only";
            else if(secondDigit==6)
                cout<<"Fifty Six only";
            else if(secondDigit==7)
                cout<<"Fifty Seven only";
            else if(secondDigit==8)
                cout<<"Fifty Eight only";
            else if (secondDigit==9)
                cout<<"Fifty Nine only";
            else if (secondDigit==0)
                 cout<<"Fifty only";
            }
            else if(firstDigit==6)
            {
                if(secondDigit==1)
                cout<<"Sixty One only";
            else if (secondDigit==2)
                cout<<"Sixty Two only";
            else if (secondDigit==3)
                cout<<"Sixty Three only";
            else if (secondDigit==4)
                cout<<"Sixty Four only";
            else if(secondDigit==5)
                cout<<"Sixty Five only";
            else if(secondDigit==6)
                cout<<"Sixty Six only";
            else if(secondDigit==7)
                cout<<"Sixty Seven only";
            else if(secondDigit==8)
                cout<<"Sixty Eight only";
            else if (secondDigit==9)
                cout<<"Sixty Nine only";
            else if (secondDigit==0)
                 cout<<"Sixty only";
            }
            else if(firstDigit==7)
            {
                if(secondDigit==1)
                cout<<"Seventy One only";
            else if (secondDigit==2)
                cout<<"Seventy Two only";
            else if (secondDigit==3)
                cout<<"Seventy Three only";
            else if (secondDigit==4)
                cout<<"Seventy Four only";
            else if(secondDigit==5)
                cout<<"Seventy Five only";
            else if(secondDigit==6)
                cout<<"Seventy Six only";
            else if(secondDigit==7)
                cout<<"Seventy Seven only";
            else if(secondDigit==8)
                cout<<"Seventy Eight only";
            else if (secondDigit==9)
                cout<<"Seventy Nine only";
            else if (secondDigit==0)
                 cout<<"Seventy only";
            }
            else if(firstDigit==8)
            {
                if(secondDigit==1)
                cout<<"Eighty One only";
            else if (secondDigit==2)
                cout<<"Eighty Two only";
            else if (secondDigit==3)
                cout<<"Eighty Three only";
            else if (secondDigit==4)
                cout<<"Eighty Four only";
            else if(secondDigit==5)
                cout<<"Eighty Five only";
            else if(secondDigit==6)
                cout<<"Eighty Six only";
            else if(secondDigit==7)
                cout<<"Eighty Seven only";
            else if(secondDigit==8)
                cout<<"Eighty Eight only";
            else if (secondDigit==9)
                cout<<"Eighty Nine only";
            else if (secondDigit==0)
                 cout<<"Eighty only";
            }
            else if(firstDigit==9)
            {
            if(secondDigit==1)
                cout<<"Ninety One only";
            else if (secondDigit==2)
                cout<<"Ninety Two only";
            else if (secondDigit==3)
                cout<<"Ninety Three only";
            else if (secondDigit==4)
                cout<<"Ninety Four only";
            else if(secondDigit==5)
                cout<<"Ninety Five only";
            else if(secondDigit==6)
                cout<<"Ninety Six only";
            else if(secondDigit==7)
                cout<<"Ninety Seven only";
            else if(secondDigit==8)
                cout<<"Ninety Eight only";
            else if (secondDigit==9)
                cout<<"Ninety Nine only";
            else if (secondDigit==0)
                 cout<<"Ninety only";
            }

        }


    }
return 0;
}
