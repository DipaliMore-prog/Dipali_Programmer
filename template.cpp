#include<iostream>
using namespace std;
int n;



template<class t>

void selection_sort(t  a[10] )
{
t temp;
cout<<"Enter no.of element:";
cin>>n;

cout<<"Enter the array elements:";
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(a[i] > a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<"Array elements:";
for(int i=0;i<n;i++)
cout<<"\n"<<a[i];
}


int main()
{


int d[10];
float b[10];
char c[10];


int ch;

do{
cout<<"\n1.sorting of interger array";
cout<<"\n2.sorting of float array";
cout<<"\n3.sorting of char array";
cout<<"\n4.Exit from code (Enter 0)";
cout<<"\n Enter the choice :";
cin>>ch;

switch(ch){
case 1:

selection_sort(d);
break;

case 2:

selection_sort(b);
break;
case 3:

selection_sort(c);
break;
}


}while(ch!=0);
return 0;
}




