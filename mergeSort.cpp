using namespace std;
#include <bits/stdc++.h>

void Merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    // length of 1st array
    int len1 = mid - s + 1;

    // length of 2nd array
    int len2 = e - mid;

    // creating array to store divided arrays

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values

    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {

        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // left wale part ke liye
    mergeSort(arr, s, mid);
    // right wale part ke liye
    mergeSort(arr, mid + 1, e);

    Merge(arr, s, e);
}
int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    for(int  i=0; i < n;i++)
    {
        cout<<arr[i]<<" ";
    }


        return 0;
}