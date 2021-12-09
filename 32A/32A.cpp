#include "32A.h"
int main()
{
    int n, d;
    int arr[1000];
    cin >> n >> d;
    Input(arr, n);
    int ways = 0;
    Reconnaissance(arr, n, ways, d);
    cout << ways * 2 << endl;
    return 0;
}