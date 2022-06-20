#include <bits/stdc++.h>
using namespace std;

string lookandsay(int n)
    {
        if (n == 1)
            return "1";
        if (n == 2)
            return "11";

        int count = 1;
        string result = "11";
        for (int i = 3; i <= n; i++)
        {
            string temp;
            
            for (int j = 1; j <= result.length(); j++)
            {
                if (result[j - 1] == result[j])
                {
                    count++;
                }
                else
                {
                    temp = temp + to_string(count);
                    temp = temp + result[j-1];
                    count=1;
                }
            }
            result=temp;
        }
        return result;
    }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        cout << lookandsay(n) << endl;
    }
    return 0;
}