#include "38A.h"
int main()
{
    int n;
    cin >> n;
    int arr1[100];
    Input(arr1, n-1);
    int years = 0;
    Cal_Years(arr1, n-1, years);
    cout << years << endl;
    return 0;
}