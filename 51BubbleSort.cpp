void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    bool swapped=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }

        if(swapped==false)
        {
            break;
        }

    }
    
}



/*

Sample Input 1:
1
5
6 2 8 4 10
Sample Output 1:
2 4 6 8 10
Sample Input 2:
2
2
1 2
4
4 3 2 1
Sample Output 2:
1 2
1 2 3 4

*/