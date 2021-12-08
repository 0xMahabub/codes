#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int a=0, b=0, c=0;

        for (int i=0; i<t; i++) {
            if (s[i] == 'A') {
                a++;
            }
            else if (s[i] == 'B') {
                b++;
            }
            else {
                c++;
            }
        }

        if ((a+c) == b) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}