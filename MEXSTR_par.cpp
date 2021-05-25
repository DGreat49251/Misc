#include <bits/stdc++.h>
using namespace std;
bool isubString(string s1, string s2);
string generateBinaryExpression(string str);
void mex();
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        mex();
    }
    return 0;
}
bool isubString(string s1, string s2)
{
    int j = 0;
    for (int i = 0; i < s2.size(); i++)
    {
        if (s1[j] == s2[i])
            j++;
        if (j == s1.size())
            return true;
    }
    return false;
}
string generateBinaryExpression(string str)
{
    queue<string> q;
    q.push("1");
    while (true)
    {
        string s1 = q.front();
        q.pop();
        if (isubString(s1, str) == false)
            return s1;
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
}
void mex()
{
    string str;
    cin >> str;
    int flag = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
            flag = 1;
    }
    if (flag == 0)
        cout << '0' << endl;
    else
    {
        cout << generateBinaryExpression(str) << endl;
    }
}
