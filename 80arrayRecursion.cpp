#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
         return isSorted(arr+1,size-1);
    }

}

int getSum(int *arr,int size)
{   if( size==0)
{
    return 0;
    
}
    return arr[0] + getSum(arr+1,size-1);
}

bool linearSearch(int *arr,int size,int key)
{
    if(size==0)
    {
        return false;
    }
    
    if(arr[0] == key)
    {
        return true;
    }
    else
    {
        return linearSearch(arr+1,size-1,key);
    }
}

bool binarySearch(int *arr,int s,int e,int key)
{
    if(s>e)
    {
        return false;
    }
        int mid = s+(e-s)/2;

    if(arr[mid] == key)
    {
        return true;
    }
    
    
    if(arr[mid] < key )
    {
        return binarySearch(arr,mid+1,e,key);
    }
    else 
    {
        return binarySearch(arr,s,mid-1,key);
    }
    
}

int main()
{
    int arr[10] = {1,2,3,5,8,9,12,34,45,67};
    int size=10;
    
    int ans = isSorted(arr,size);
    cout<<ans<<endl;
    
    if(ans)
    {
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    
    int sum = getSum(arr,size);
    cout << "The sum is:"<<sum<<endl;
    
    int key =5;
    
    // int isFound = linearSearch(arr,size,key);
    bool isFound = binarySearch(arr,0,size-1,key);
    
    if(isFound)
    {
        cout<<"The key is found";
    }
    else
    {
        cout<<"Key is not found";
    }
    
    return 0;
    
}