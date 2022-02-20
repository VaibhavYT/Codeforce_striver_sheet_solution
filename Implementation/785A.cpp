#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count = 1;
    int sum =0;
    while (t--)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron"){
            
            sum += 4*count;
        }
        else if(s=="Cube"){
            sum += 6*count;
        }
        else if (s=="Octahedron")
        {
            sum += 8*count;
        }
        else if(s=="Dodecahedron"){
            sum += 12*count;
        }
        else
        {
            sum += 20*count;
        }
        
        

    }
    cout<<sum<<endl;
    

    
}