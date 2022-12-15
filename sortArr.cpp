using namespace std ;
#include<bits/stdc++.h>
void SelectiontionSort(int arr[] , int n)
{
    for(int i = 0 ; i< n-1 ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
            if(arr[i] > arr[j])
            swap(arr[i] , arr[j]);
    }
}
void InsertionSort(int arr[] , int n)
{
    for(int i = 1 ; i < n ; i++)
    {
        int temp = arr[i];
        int j = i -1 ;
        for(; j>=0;j--)
        {
            if(temp < arr[j])  //agar i th element apne pahle wale mtlb ki j wale element se chota hai to use j ke pahle daalenge matlab ki j ko aagey shift karenge 

            {
              arr[j+1] = arr[j];
            }
            else{
                break ;
            }
        }
        arr[j+1] = temp ;

    }

}
void BubbleSort(int arr[] , int n)
{
    for(int i = 1 ; i < n ; i++)
    {
        for(int j = 0 ; j < n - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j+1] , arr[j]);
            }
        }
    }

    for(int i = 0 ; i< n ; i++)
    cout<<arr[i]<<" ";
}
int main()
{
//     int n = 2 ;
// int arr[n] = {10 , 1};
//  for(int i = 1 ; i < n ; i++)
//     {
//         int temp = arr[i];
//         int j = i -1 ;
//         for(; j>=0;j--) //j-- kyunki hum i se pahle wale har element ko check karenege 

//         {
//             if(temp < arr[j])  //agar i th element apne pahle wale mtlb ki j wale element se chota hai to use j ke pahle daalenge matlab ki j ko aagey shift karenge 

//             {
//               arr[j+1] = arr[j];
//             }
//             else{
//                 break ;
//             }
//         }
//         cout<<j<<endl;
//         arr[j+1] = temp ;  

//     }
// for(int i = 0; i<n ; i++)
// {
//     cout<<arr[i]<<" ";
// }
int n = 5 ;
int arr[n] = {12,4,9,54,23};
BubbleSort(arr,n);
}