#include<bits/stdc++.h>
using namespace std;

void merge(int*arr , int low , int high)
{
   int mid = floor((low+high)/2);
   int i=0;
   int*arr1;
   int*arr2;
   int size1 = (mid-low)+1;
   int size2 = (high-mid);
   arr1 = new int[size1];
   arr2 = new int[size2];
   int k = low;
   for(i=0 ; i<size1 ; i++) 
   {
     arr1[i] = arr[k++];
   }
   //copied half of the contents of arr in arr1
   k = mid+1;
   for(i=0 ; i<size2 ; i++)
   {
    arr2[i] = arr[k++];
   }
   //copied the rest half in arr2
   
   int indx1 = 0;
   int indx2 = 0;
   k = low;
   while(indx1<size1 && indx2<size2)
   {
     if(arr1[indx1]<=arr2[indx2])
     {
       arr[k] = arr1[indx1];
       indx1++;
       k++;
     }
     else if(arr1[indx1]>arr2[indx2])
     {
        arr[k] = arr2[indx2];
        indx2++;
        k++;
     }
   } 
   while(indx1 < size1)
   {
    arr[k] = arr1[indx1];
    indx1++;
    k++;
   }
    while(indx2 < size2)
   {
    arr[k] = arr2[indx2];
    indx2++;
    k++;
   }
}
void mergeSort(int*arr , int low , int high)
{
    if(low >= high)
    {
        return;
    }
    else
    {
    int mid = floor((low+high)/2);

    //merge sort(right part):
    mergeSort(arr,low,mid);

    //merge sort(left part):
    mergeSort(arr,mid+1,high);

    //merge:
    merge(arr,low,high);
    }
}  

int main()
{
    int arr[6] = {3,4,1,2,6,5};
    mergeSort(arr,0,5);
    for(int i=0 ; i<6 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}