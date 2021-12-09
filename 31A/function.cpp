#include "31A.h"

void Input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = "; cin >> arr[i];
    }

}
void Index(int arr[], int n)
{
    bool flag = false;
    int i = 0;
    while (i < n - 1)
    {
        int j = i + 1;
        while (j < n)
        {
            int k = 0;
            while (k < n)
            {
                if (arr[i] + arr[j] == arr[k])
                {
                    cout << k + 1 << "\t" << j + 1 << "\t" << i + 1 << endl;
                    flag = true;
                    break;
                }
                k++;

            }
            if (flag == true)
            {
                break;
            }
            j++;
        }
        if (flag == true)
        {
            break;
        }
        i++;
    }
    if (flag == false)
    {
        cout << "-1" << endl;
    }
}