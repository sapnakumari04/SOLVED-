/* Question1:
Given an array of integers, write a function to find the maximum element in the array.

Example:
Input: [5, 10, 3, 8, 15]
Output: 15
*/
#include<iostream>
using namespace std;

int max(int arr[],int size)
{
    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(max < arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[]={5, 10, 3, 8, 15};
    cout<< max(arr,5);
    return 0;
}
