#include <iostream>

using namespace std;

int min_merge(int arr[],int n)
{
    //min no of merge operations needed
    int count =0;

    //i and i are intial to endpoints of the array
    int i =0;
    int j =n-1;
    //loop till the search is exhausted
    while(i<j)
    {
        if(arr[i]<arr[j])
        {
            arr[i+1]+=arr[i];
            i++;
            count++;
        }
        else if (arr[i]>arr[j])
        {
            arr[j-1]+=arr[j];
            j--;
            count++;
        }
        else
        {
            i++,j--;
        }
    }
    return count;

}

int main()
{
    int arr[] = {6,1,4,3,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int min = min_merge(arr,n);
    cout<<"Minimum number of operations required :"<<min;
    return 0;

}