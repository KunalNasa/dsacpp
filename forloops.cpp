#include<iostream>
using namespace std;
int main()
{
    /*
    int a,b=1;
    a = 10;
    if(++a) //it will be a non zero value and every non zero value in cpp is true.So,this
    // if statement is true.
    {
        cout<<b;

    }
    else
    {
        cout<<++b;
    }
    */

    // for (int i = 0, j = 0; i < 5 && j<6; i++,j++)
    // {
    //     cout<<i<<"  "<<j<<endl;
    // }
/*
    int n, sum = 0;
    cout<<"Enter the number\n";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        sum = sum + i;
    }
    cout<<sum<<endl;
*/
// FIBONACCI SERIES
/*
int n;
cout<<"Enter an integer\n";
cin>>n;
int a = 0;
int b = 1;
cout<<a<<" "<<b<<" ";

for (int i = 1; i < n; i++)
{
    int nextnum = a + b;
    cout<<nextnum<<" ";
    a = b;
    b = nextnum;
}
*/
int k;
cout<<"Enter the number\n";
cin>>k;
for (int i = 2; i < k; i++)
{
    if(k%i == 0)
    {
       cout<<"Number is not a prime\n";
       break;
    }
    else{
        cout<<"Number is a prime\n";
        break;
    }
}
}