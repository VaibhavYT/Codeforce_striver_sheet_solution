#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len = s.size();
    int f = s[0]- '0';
    if(f==9){
        s[0]='9';
    }
    else{
        if(f>4){
            s[0] = ((9-f)+'0');
        }
    }
for(int i = 1; i<len; i++){
    int a = s[i]- '0'; // important converting string into int
    if(a<5 || a==0){
        continue;
    }
    else{
        s[i]= ((9-a)+'0');
    }
}
cout<<s;
    return 0;
}