#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string d1, d2;
    cin >> d1 >> d2;
    int res = 0;
    for (int i=0; i < n; i++) {
        int d = abs(d2[i] - d1[i]);
        res = res + min(d, 10 - d);
    }
    cout << res << endl;

    return 0;
}