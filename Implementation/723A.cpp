/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, x1, x2;
    cin >> x >> x1 >> x2;
    int min1;
    int min2;
    if (x > x2 && x1>x2)
    {
        
        min1 = x-x1;
        
    }
    else if(x>x2 ){
        min1 = x - x2;
    }
    else
    {
        min1 = x2 - x;
    }
    if (x1 > x2)
    {
        min2 = x1 - x2;
    }
    else
    {
        min2 = x2 - x1;
    }
    int sum = min1 + min2;

    cout << sum << endl;
    return 0;
}*/

#include <iostream>
#include <algorithm>
using namespace std;
int mas[3];
int main() {
    cin >> mas[0] >> mas[1] >> mas[2];
    sort(mas, mas + 3);
    cout << mas[2] - mas[0];
}