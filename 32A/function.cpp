#include "32A.h"
void Input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = "; cin >> arr[i];
    }

}
void Reconnaissance(int arr[], int n, int& ways,int d)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[j] - arr[i] <= d) && (arr[j] - arr[i] >= 0) || (arr[i] - arr[j] <= d) && (arr[i] - arr[j] >= 0))
            {
                ways += 1;
            }
        }
    }
}