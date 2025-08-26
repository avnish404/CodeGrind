void merge(vector<int> &arr,int s,int e)
{
    int mid= s+(e-s)/2;
    int len1= mid-s+1;
    int len2= e-mid;

    int *arr1=new int[len1];
    int *arr2=new int[len2];

    int mainArrayIndex = s;
    //Copying values into new array
    for(int i=0;i<len1;i++)
    {
        arr1[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
    //Copying values second new array
    for(int i=0;i<len2;i++)
    {
        arr2[i] = arr[mainArrayIndex++];
    }

    //Merging both the arrays
    int index1=0;
    int index2=0;
    mainArrayIndex = s;
    while(index1<len1 && index2<len2)
    {
            if(arr1[index1]<arr2[index2])
            {
                arr[mainArrayIndex++] = arr1[index1++];
            }
            else
            {
                 arr[mainArrayIndex++] = arr2[index2++];
            }
    }
    while(index1<len1)
    {
         arr[mainArrayIndex++] = arr1[index1++];
    }
    while(index2<len2)
    {
         arr[mainArrayIndex++] = arr2[index2++];
    }
    
}
void sort(vector<int> &arr,int s,int e)
{
    if(s>=e)
    {
        return;
    }

    int mid = s+(e-s)/2;
    //Sorting left part
    sort(arr,s,mid);

    //Sorting Right part
    sort(arr,mid+1,e);

    //Merging the arrays
    merge(arr,s,e);

}

void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    sort(arr,0,n-1);
}



/*

Problem statement
Given a sequence of numbers ‘ARR’. Your task is to return a sorted sequence of ‘ARR’ in non-descending order with help of the merge sort algorithm.

Example :

Merge Sort Algorithm -

Merge sort is a Divide and Conquer based Algorithm. It divides the input array into two-parts, until the size of the input array is not ‘1’. In the return part, it will merge two sorted arrays a return a whole merged sorted array.

The above illustrates shows how merge sort works.
Note :
It is compulsory to use the ‘Merge Sort’ algorithm.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 50
1 <= N <= 10^4
-10^9 <= arr[i] <= 10^9

Time Limit : 1 sec
Sample Input 1 :
2
7
3 4 1 6 2 5 7
4
4 3 1 2
Sample Output 1 :
1 2 3 4 5 6 7
1 2 3 4
Explanation For Sample Input 1:
Test Case 1 :

Given ‘ARR’ : { 3, 4, 1, 6, 2, 5, 7 }

Then sorted 'ARR' in non-descending order will be : { 1, 2, 3, 4, 5, 6, 7 }. Non-descending order means every element must be greater than or equal to the previse element.

Test Case 2 :

Given ‘ARR’ : { 4, 3, 1, 2 }

Then sorted 'ARR' in non-descending order will be : { 1, 2, 3, 4 }. 
Sample Input 2 :
2
4
5 4 6 7
3
2 1 1
Sample Output 2 :
4 5 6 7
1 1 2


*/