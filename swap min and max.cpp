#include<iostream>
#include<climits>  // For INT_MAX and INT_MIN
using namespace std;

int min(int arr[], int size)
{
    int minVal = INT_MAX;
    int minIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
            minIndex = i;
        }
    }
    return minIndex;  // Return the index of the minimum value
}

int max(int arr[], int size)
{
    int maxVal = INT_MIN;
    int maxIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;  // Return the index of the maximum value
}

void swapminmax(int arr[], int size)
{
    int minIndex = min(arr, size);  // Get the index of the minimum value
    int maxIndex = max(arr, size);  // Get the index of the maximum value
    
    // Swap the elements at the minimum and maximum indices
    if (minIndex != -1 && maxIndex != -1 && minIndex != maxIndex)
    {
        swap(arr[minIndex], arr[maxIndex]);
    }
}

int main()
{
    int size = 7;
    int arr[size];
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    swapminmax(arr, size);  // Call the function to swap min and max elements

    cout << "Array after swapping min and max elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

