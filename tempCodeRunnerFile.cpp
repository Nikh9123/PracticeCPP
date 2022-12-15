void SelectiontionSort(int arr[] , int n)
// {
//     for(int i = 0 ; i< n-1 ; i++)
//     {
//         for(int j = i+1 ; j < n ; j++)
//             if(arr[i] > arr[j])
//             swap(arr[i] , arr[j]);
//     }
// }
// void InsertionSort(int arr[] , int n)
// {
//     for(int i = 1 ; i < n ; i++)
//     {
//         int temp = arr[i];
//         int j = i -1 ;
//         for(; j>=0;j--)
//         {
//             if(temp < arr[j])  //agar i th element apne pahle wale mtlb ki j wale element se chota hai to use j ke pahle daalenge matlab ki j ko aagey shift karenge 

//             {
//               arr[j+1] = arr[j];
//             }
//             else{
//                 break ;
//             }
//         }
//         arr[j+1] = temp ;

//     }

// }