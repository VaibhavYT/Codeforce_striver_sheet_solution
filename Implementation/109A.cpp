#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    char se = '7';
    char f = '4';
    int sum = 0;
    while (n>0)
    {
        if(n>7){
            n= n-7;
            s = s+se;

        }
        else{
            n= n-4;
            if(n==0){
                s = s+ f;
            }
        }
    }
    if(n==0){
    cout<<s;
    }else
    {
        cout<<-1;
    }
    
    
}