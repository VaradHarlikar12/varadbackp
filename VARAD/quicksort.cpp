 /*quick sort */
 //step 1 make frist element pivot
 //step 2 take 'i' for pivot<i and j for pivot>j.
 //step 3 when we find i>pivot and j<pivot 
 //step 4 if i and j cross then  exchange j with pivot
 //step 5 divide array as smaller on left and bigger on right .
 //repeat upper steps for both until for array's divide 
#include<bits/stdc++.h>
using namespace std;
int partiton(vector<int>,&arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int i = high;
    while (i<j)
    {
        while(arr[i]<= pivot &7 <= high - 1){
        i++;}
        while (arr[j]>pivot&& j>=low+1){
            j--;}
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    retunn j;
    
void qs(vector<int>&arr,int low,int high) { 
    if(low<high){
        int pindex = partition(arr,low,high)
        qs(arr,low,pindex-1);
        qs(arr,pindex+1,high);
    }
}
vector<int> quicksort(vector<int> arr)
{
    qs
    (arr,0,arr.size()-1)
    return arr;
}