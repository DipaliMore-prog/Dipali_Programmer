#include<iostream>
using namespace std;
class Televison
{
public:
int modelno,screensize,prise;
public:
friend istream & operator>>(istream &,Televison &);
friend ostream & operator<<(ostream &,Televison &);
};
istream & operator>>(istream & din, Televison &t)
{
int e;
cout<<"\nEnter model no & screen size & prise= ";
din>>t.modelno>>t.screensize>>t.prise;
try
{
if(t.modelno>9999||t.prise<0||t.prise>5000||t.screensize<12||t.screensize>70)
{
throw e;                                                                               
}
}
catch(int e)
{
cout<<"\n Exception is caught";
t.modelno=0;
t.screensize=0;
t.prise=0;
}
return din;
}
ostream  & operator<<(ostream &dout, Televison &t)
{
dout<<"\nDisplay model no & screen size & prise= ";
dout<<t.modelno;
dout<<t.screensize;
dout<<t.prise;
return dout;
}
int main()
{
Televison t;
int ch;
do
{

cout<<"\nEnter your choice= \n1. Accept \n2. Display\n 3.Exit=";
cin>>ch;

switch(ch)
{
case 1:
cin>>t;
break;
case 2:
cout<<t;
break;
case 3:
break;
default:
cout<<"\nEnter correct choice=";
break;
}
}while(ch!=3);
return 0;
}


