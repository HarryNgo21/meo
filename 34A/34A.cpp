#include "34A.h"
int main()
{
    int arr[100];
    int n;
    cin >> n;
    int min = INT_MAX;
    Input(arr, n);
    Reconnaissance(arr,n,min);
    return 0;
}