#include <bits/stdc++.h>
using namespace std;

#define  py  cout<<"YES"
#define  pn cout<<"NO" 
#define ll long long
int main()
{
    int t;
    cin >> t;
    string s1 = "abcdefghijklmnopqrstuvwxyz";

    while (t--)
    {
        string str = "";
        int n = 0;
        cin >> n;
        int i = 0;
        while (n--)
        {
            str += s1[i];
            if (i == 25)
            {i = 0;
            }
            i++;
        }
        cout << str <<endl;
    }
    return 0;
}
