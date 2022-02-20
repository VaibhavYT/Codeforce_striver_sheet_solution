/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int m = 2;
    int i=3;
    if(t==1){
        cout<<0;
    }
    else if(t==2){
        cout<<3;
    }else
    {

    
    while (i!=t)
    {
        if(i%2==0){
            m++;
            
        }else
        {
            m++;
            m++;
        }
        i++;
        
    }
    int ans = t+(m*2);
    cout<<ans;
    }
    
}*/
#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    // 1*(n-1)+1 + 2*(n-2)+1 + 3*(n-3)+1 + ... + n*(n-n)+1
    cout << (n - 1) * n * (n + 1) / 6 + n << endl;
    return 0;
}