/*You are given an integer array 'A' of size 'N', sorted in non-decreasing order.You are also given an integer 'target'
your task is to write a function to search for 'target in the array 'A' If it exists return its index in 0-based
indexing using Linear search in c++*/

/* Linear Search */

#include<iostream>
using namespace std;
int main()
{
int a[10], n, i, key, flag=0, count=0;
cout<<"Enter Size Of Array :\n";
cin>>n;
cout<<"Enter Elements Of Array :\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter Key Element To Be Search[target]:\n";
cin>>key;
for(i=0;i<n;i++)
{

if(key==a[i])
{
count++;
flag=1;

break;
return count;  

}
}
if(flag==1)
{
cout<<"Element Found at Index: \n"<<i<<endl;
cout<<"No. of Occurrences in Array :\n"<<count<<endl;
}
else
{
cout<<"Element Not Found";
}
return 0;
}

	

