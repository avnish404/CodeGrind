#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    // int small= fact(n-1);
    // int big = n*small;

    return n*fact(n-1);
}

int sum(int n)
{
    if(n==0)
    return 0;
    
    return n+sum(n-1);
}

int power(int n)
{
    if(n==0)
    {
        return 1;
    }
    
    return 2*power(n-1);
}

void print(int n)
{
    if(n==0)
    {
        cout<<"Printing:"<<n;
        return;
    }
    
    cout<<"Printing:"<<n<<endl;
    print(n-1);
    return;
}

int main()
{

    int n;
    cin>>n;
        //Factorial code
    // int factorial = fact(n);
    // cout<<factorial<<endl;
    
        //sum of first n mubers code
    // int add=sum(n);
    // cout<<add<<endl;
    
        //power of 2 code
    // int result = power(n);
    // cout<<result<<endl;
    
    
    //Printing first n numbers
    print(n);
}