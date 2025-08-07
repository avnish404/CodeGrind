#include<bits/stdc++.h>
using namespace std;

void sortArr(int arr[],int i,int n)
{
    
    //Base case
    if(i == n)
    {
        return ;
    }

    for(int j=i-1;j>=0;j--)
    {
        if(arr[j+1]<arr[j])
        {
            swap(arr[j+1],arr[j]);
        }
        else
        {
            break;
        }
    }
    
    //Recursive call
    sortArr(arr,i+1,n);
}

int main()
{
    int arr[10]={23,45,2,56,34,9,0,78,4,10};
    
    sortArr(arr,1,10);
    
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}



/*


o/p = 0 2 4 9 10 23 34 45 56 78 

In insertion sort we will send the elemnt to the right place (leftmost part) in every iteration


*/