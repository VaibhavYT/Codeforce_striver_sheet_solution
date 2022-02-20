/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sum = 0;
    int a, b;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if(a==0 && b==0){
            cout<<sum;
        }
      else if (i == t - 2)
        {
            sum = a + b;
        }
    }
    cout << sum;
    return 0;
}*/
#include <iostream>
#include<cmath>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 int capacity=0;
	 int stillnow=0;
	 for(int i=0;i<n;i++){
		 int a,b;
		 cin>>a>>b;
		 stillnow-=a;
		 stillnow+=b;
		 capacity=max(capacity,stillnow);

	 }
	 cout<<capacity;

	return 0;
}