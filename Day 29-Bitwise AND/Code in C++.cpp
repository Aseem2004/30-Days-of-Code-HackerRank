#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int x;
    cin>>x;
    int N, K;
    
    for(int i=0;i<x;i++)
    {
        vector<int> s;
        cin>>N>>K;

        for(int j=1;j<=N;j++)
        {
            s.push_back(j);
        }

        int max=0;

        for(int p=0; p<N; p++)
        {
            for(int q=p+1; q<N; q++)
            {
                if((s[p]&s[q])<K && (s[p]&s[q])>max)
                    max=(s[p]&s[q]);
            }
        }

        cout <<max<< endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
