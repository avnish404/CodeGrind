#include<bits/stdc++.h>
using namespace std;

void sortArr(int arr[],int i,int n)
{
    
    //Base case
    if(i == n-1)
    {
        return ;
    }

   
    int minIndex = i;
    int j=i+1;
    while(j<n)
    {
        if(arr[minIndex]>arr[j])
        {
            minIndex=j;
        }
        j++;
    }
    swap(arr[minIndex],arr[i]);
    
    sortArr(arr,i+1,n);
}

int main()
{
    int arr[10]={23,45,2,56,34,9,0,78,4,10};
    
    sortArr(arr,0,10);
    
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}


/*


//For Selection sort in every iteration we find index of minimum number and then swap it

o/p = 0 2 4 9 10 23 34 45 56 78 


*/