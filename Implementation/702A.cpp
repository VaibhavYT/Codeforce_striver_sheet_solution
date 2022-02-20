#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 1;
    int max = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            count++;
        }

        else
        {
            if (count > max)
                max = count;

            count = 1;
        }
    }

    if (count > max)
        max = count;

    cout << max;
}