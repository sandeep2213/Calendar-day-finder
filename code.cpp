#include<iostream>
#include<conio.h>

using namespace std;

int leapyear();
int day,month,year,y,leapday;
#define first 1990   // monday  on  1 1 1990
int x=1;

int main (){
cout<<"WELCOME to the program to find day with Date. First enter year \n";

loop:   cin>>year;

y=leapyear();

if (year>first)
{
    x=year-first;

    leapday=x/4;
    x=x*365;
    x=x+leapday;

}
else
{

    cout<<"year must be greater than 1990 \a \n";
    goto loop;
}

cout<<"Now enter month"<<endl;
loop1 : cin>>month;
if (month<=12)
{
    cout<<"now enter day"<<endl;
 loop2:   cin>>day;
}
else
{
    cout<<"error : unexpected month, kindly please enter valid value \a \n";
goto loop1;
}
cout<<"you entered as \n"<<day<<"-";
if (month==1 && day <=31)
{
    cout<<"January-";
    x=x+day;
}
else if (month==2 && day <=28 && y==0)
{
    cout<<"February-";
x=x+31+day;
}
else if (month==2 && y==1 && day <=29)
{
    cout<<"February(leap)- \n";
x=x+31+day;
}
else if (month==3 && day <=31)
{
    cout<<"March-";

if (y==1){
x=x+60+day;
}
else {
    x=x+59+day;
}
}
else if (month==4 && day <=30)
{
    cout<<"April-";
    x=x+90+day;
}
else if (month==5 && day <=31)
{
    cout<<"May-";
x=x+120+day;
}
else if (month==6 && day <=30)
{
    cout<<"June-";
x=x+151+day;
}
else if (month==7 && day <=31)
{
    cout<<"july-";
x=x+181+day;
}
else if (month==8 && day <=31)
{
    cout<<"August-";
x=x+212+day;
}
else if (month==9 && day <=30)
{
    cout<<"September-";
x=x+243+day;
}
else if (month==10 && day <=31)
{
    cout<<"october-";
    x=x+273+day;
}
else if (month==11 && day <=30)
{
    cout<<"November-";
    x=x+304+day;
}
else if (month==12 && day <=31)
{
    cout<<"December-";
    x=x+334+day;
}
else{
    cout<<"(error-bad value:re-enter day) \a \n";
    goto loop2;

}


cout<<year<<endl;


loop3:
    if (x>=8)
{
   x=x-7;
  goto loop3;
        }
else{
    cout<<"and day is : \n";

    switch (x)
   {
       case 1: cout<<"Monday";
               break;
       case 2: cout<<"Tuesday";
                break;
       case 3: cout<<"Wednesday";
       break;
       case 4: cout<<"Thursday";
       break;
       case 5: cout<<"Friday";
       break;
       case 6: cout<<"Saturday";
       break;
       default : cout<<"Sunday";
       break;
   }
}

getch();
return 0;
};

int leapyear()
{
    int a;
a=year%4;
if (a!=0)
{
    return 0;
}
else
{
    return 1;
};

};
