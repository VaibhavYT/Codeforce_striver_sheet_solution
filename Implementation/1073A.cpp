#include <iostream>
#include <string>

using namespace std;

int main() {

    long long int n;

    string s;

    cin >> n >> s;

    if(n <= 1000){

        for(int i = 0 ; i < n-1 ; i++){

            if((s.at(i) >= 'a' && s.at(i) <= 'z') && (s.at(i+1) >= 'a' && s.at(i+1) <= 'z')){

                if(s.at(i) != s.at(i+1)){

                    cout << "YES" << endl;

                    cout << s.at(i) << s.at(i+1) << endl;

                    exit(0);
                }
            }

        }

        cout << "NO" << endl;


    }else{

        exit(0);

    }

    return 0;
}