#include <bits/stdc++.h>

using namespace std;

int main(){

    string s = "aacecaaa";
    string temp="";

    int n=s.size()-1, cnt=0;
    for (int i = n-1; i >= 0; i--)
    {
        if(s[i]==s[n] && i==n-1){
            n = i; i = n;
        }else{
            // temp.push_back(s[i]);
            cnt++;
        }
    }
    // cout << (s+temp) << endl;
    cout << cnt;

    return 0;
}