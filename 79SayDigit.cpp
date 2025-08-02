#include<bits/stdc++.h>

using namespace std;

void sayDigit(int n, string arr[])
{
    if(n==0)
    {
        return ;
    }
    int digit = n%10;
    
    sayDigit(n/10,arr);
    
    cout<<arr[digit]<<" ";
}

int main()
{
string arr[10] = {"Zero", "One", "Two", "Three", "Four", 
                      "Five", "Six", "Seven", "Eight", "Nine"};
    
    int n;
    cin>>n;
    
    cout<<endl<<endl;
    
    sayDigit(n,arr);
    
}



/*

input - 412
output - four one two

*/