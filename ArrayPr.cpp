using namespace std ;
#include<bits/stdc++.h>
// void Del(int arr[] , int n , int del)
// {
//     cout<<"in deleting function "<<endl;
//      for(int i =del ; i < n ; i++ )
//     {
//         arr[i] = arr[i+1];
//     }
//     cout<<endl;
//     n = n-1 ;
//     for(int i = 0 ;i <n ; i++)
//     cout<<arr[i]<<" ";

// }
// void insert(int arr[] , int n , int ins , int ele)
// {
//     cout<<endl;
//     cout<<"in inserting function "<<endl;

//     for(int i=n-1 ;i>=ins ; i--)
//     arr[i+1] = arr[i];
//      n = n + 1 ;
//     arr[ins] = ele ;
//     // n = n + 1 ;
//     for(int i= 0 ; i < n-1 ;i++)
//     cout<<arr[i]<<" ";
// }
int BinarySearch(int arr[] , int size , int key)
{
    int start = 0 ;
    int end = size -1 ;
    int mid = start + (end - start)/2;
    while(start <= end)
    {
        if(arr[mid] == key)//agar element(key) bich me hai to 
        return mid;
        if(key > arr[mid]) //agar key mid se bada hain to
        {
            start = mid +1 ;

        }
        else{     //agar key mid se chota hai 
            end = mid -1 ;
        }
        mid = start + (end - start)/2; 

    }
    return -1 ;
}
int main()
{   int n = 6 ; 
    int arr[n]  =  {5,10,15,20,25,30};
    // int del = 2 ;
    // Del(arr , n , 2);
    // int ins = 2 , ele = 15 ;
    // insert(arr, n , ins , ele);
    int key = 20 ;
    cout<<BinarySearch(arr , n , key);
}
