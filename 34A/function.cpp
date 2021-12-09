#include "34A.h"
void Input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = "; cin >> arr[i];
    }

}
void Reconnaissance(int arr[], int n, int& min)
{
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        if (i == n - 1)
        {
            j = 0;
        }
        if (abs(arr[j] - arr[i]) < min)
        {
            min = abs(arr[j] - arr[i]);
        }
    }

    int i = 0;
    bool flag = false;
    while (i < n)
    {
        int j = i + 1;
        if (i == n - 1)
        {
            j = 0;
        }
        if (abs(arr[j] - arr[i]) == min)
        {
            cout << i + 1 << "\t" << j + 1;
            break;
        }
        i++;
    }
}