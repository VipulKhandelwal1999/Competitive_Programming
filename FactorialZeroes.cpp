#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, n, count;
    cin >> t;
    while(t--){
        cin >> n;
        count = 0;
        for (int i = 5; n / i >= 1; i *= 5)
            count += n / i;
        cout << count << endl;
    }
    return 0;
}
