#include "array.h"
void Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void Input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = "; cin >> arr[i];
    }

}
void Input_New_Number(int arr[], int& n)
{
    
    Input(arr, n);

    Sort(arr, n);

    int new_number;
    cout << "Input new number = "; cin >> new_number;
    n += 1;
    arr[n - 1] = new_number;
    Sort(arr, n);
}
void Del(int arr[], int pos, int& n)
{
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n -= 1;
}
void Find(int arr[], int& n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                Del(arr, j, n);
            }
        }
    }
}