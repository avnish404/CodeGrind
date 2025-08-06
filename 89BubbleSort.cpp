#include<bits/stdc++.h>
using namespace std;

//Bubble Sort
void sortArray(int *arr,int n)
{
    //base case
    if(n==1 || n==0)
    {
        return ;
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
    sortArray(arr,n-1);
}



int main()
{
    int arr[5] = {1,7,34,3,6};
    
    sortArray(arr,5);
    
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



/*


input = {1,7,34,3,6}
output = {1,3,6,7,34}


*/