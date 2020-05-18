//Q. The first line contains an integer T, total number of testcases. 
// Then follow T lines, each line contains an integer N.
//Output -> Display the reverse of the given number N.

#include <iostream>
#include <sstream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::ostringstream ss;
    long x, t, i;
    cin >> t;
    while(t--)
    {
        i = 0;
        ss.str("");
        ss.clear();
        string num;
        cin >> x;
        ss << x;
        num = ss.str();
        reverse(num.begin(), num.end());
        for(i=0; i<num.length(); i++){
            if(num[i] != '0'){
                break;
            }
        }
        for( ; i<num.length(); i++){
            cout << num[i];
        }
        cout << endl;
    }
    return 0;
}

