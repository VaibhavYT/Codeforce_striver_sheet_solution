#include<bits/stdc++.h>
using namespace std;
int main(){
int n, k, l, c, d, p, nl, np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int tml = (k*l)/nl;
int cd = (c*d);
int cp = p/np;
int sim = min(tml,cd);
int sp = min(cp,sim)/n;
cout<<sp;

}