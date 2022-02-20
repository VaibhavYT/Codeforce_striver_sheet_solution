#include<bits/stdc++.h>
using namespace std;
int main(){
    int o;
    cin>>o;
    string s;
    cin>>s;
    int n = s.size();
    int k =0;
    string str ;
     for (int i = 0; i <n ; i++)
     {
         char c = s[i];

         str += c;
         i = i+k;
         k++;

     }
     cout<<str;
}