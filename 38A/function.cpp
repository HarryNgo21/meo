#include "38A.h"
void Input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = "; cin >> arr[i];
    }

}
void Cal_Years(int arr1[], int n,int &years)
{
    int a, b;
    cin >> a >> b;

    for (int i = a - 1; i < b - 1; i++)
    {
        years += arr1[i];
    }
}