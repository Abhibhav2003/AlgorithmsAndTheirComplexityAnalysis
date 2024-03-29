#include<bits/stdc++.h>
using namespace std;

int partition(int* arr , int s , int e)
{
   int pivot = arr[s];
   int cnt = 0;
   for(int i=s+1 ; i<e ; i++)
   {
     if(arr[i]<=pivot)
     cnt++;
   }
   
   int pivotIndex = s+cnt;
   swap(arr[s],arr[pivotIndex]);

   int i = s , j = e;
   
   while(i<pivotIndex && j>pivotIndex)
   {
     if(arr[i]<arr[pivotIndex])
     i++;

     else if(arr[j]>arr[pivotIndex])
     j--;

     else if(i<pivotIndex && j>pivotIndex){
        swap(arr[i],arr[j]);
        i++;
        j--;
     }
   }
   return pivotIndex;
}
void QuickSort(int* arr, int s , int e)
{
  if(s>=e)
  return;

  int p = partition(arr,s,e);//n
  QuickSort(arr,s,p-1); // => T(p)
  QuickSort(arr,p+1,e);// => T(n-p-1)
}

int main()
{
    int arr[5] = {4,1,5,2,3};
    QuickSort(arr,0,5);
    for(int k=0 ; k<5 ; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}