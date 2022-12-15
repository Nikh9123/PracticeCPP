using namespace std;
#include <bits/stdc++.h>
void FuncForward(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void FuncBack(int arr[], int n)
{
    cout << "in backward print func()" << endl;
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
}
int LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int BinarySearch(int arr[], int size, int key) // binary search ke liye array should be sorted
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key) // agar element(key) bich me hai to
            return mid;
        if (key > arr[mid]) // agar key mid se bada hain to
        {
            start = mid + 1;
        }
        else
        { // agar key mid se chota hai
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
void SelectionSort(int arr[], int n)
{
    cout << "in selection  sort" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

        //     int temp = arr[i];
        //     int j = i -1 ;
        //     for(; j>=0;j--)
        //     {
        //         if(temp < arr[j])  //agar i th element apne pahle wale mtlb ki j wale element se chota hai to use j ke pahle daalenge matlab ki j ko aagey shift karenge

        //         {
        //           arr[j+1] = arr[j];
        //         }
        //         else{
        //             break ;
        //         }
        //     }
        //     arr[j+1] = temp ;

        // }
    void InsertionSort(int arr[] , int n)
    {
    	cout<<"in InsertionSort"<<endl;
    	for(int i = 1 ; i < n ; i++)
    	{
    		int temp = arr[i];
    		int j = i-1 ;
    		for( ; j>=0 ; j--)
    		{
    			if(arr[j] > temp )
    			{
				
    			arr[j+1] = arr[j];
    		}
    			else 
    			{
    				break ;
				}
			}
			arr[j+1] = temp ;
		}
		for(int k =0 ; k<n ;k++)
		cout<<arr[k]<<" ";
	}
	void BubbleSort(int arr[] , int n)
	{
		for(int i = 0  ; i < n -1 ; i++)
		{
			for(int j = 0 ; j < n-1-i ; j++)
			{
				if(arr[j] > arr[j+1])
				swap(arr[j] , arr[j+1] );
			}
		}
	}
    int main()
    {
        int n = 11;
        int arr[n] = {12, 45, 2, 55, 22, 1, 4, 98, 93, 3, 43};
//        FuncForward(arr, n);
//        FuncBack(arr, n);
//        int key;
//        cout << "enter key to search" << endl;
//        cin >> key;
//        cout << "in Linear search " << LinearSearch(arr, n, key) << endl;
////        SelectionSort(arr, n);
//        cout << "in binary search " << BinarySearch(arr, n, key) << endl;
        InsertionSort(arr, n);
    }
