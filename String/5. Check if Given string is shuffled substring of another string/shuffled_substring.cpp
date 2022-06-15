#include <bits/stdc++.h>
using namespace std;

bool areRotations(string s1, string s2)
{
    sort(s1.begin(), s1.end());

    int j = 0, len1, len2;
    string temp;
    len1 = s1.length();
    len2 = s2.length();

    if (len1 > len2)
        return false;

    for (int i = 0; i < len2; i++)
    {
        if (i + len1 - 1 >= len2)
            return false;

        string str = "";

        for (int j = 0; j < len1; j++)
            str.push_back(s2[i + j]);

        sort(str.begin(), str.end());
        if (str == s1)
            return true;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool ans;
        string s1;
        string s2;
        cin >> s1 >> s2;
        ans = areRotations(s1, s2);
        cout << ans;
    }
    return 0;
}
