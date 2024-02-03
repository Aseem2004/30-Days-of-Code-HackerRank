#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int main()
{
    
    int x;
    cin >> x;

    vector<string> emails(x);
    vector<string> names(x);
    vector<string> gmailUsers;

    for(int i = 0; i < x; i++)
    {
        cin >> names[i] >> emails[i];
    }

    for(int i = 0; i < x; i++)
    {
        if(regex_match(emails[i], regex("(.*)@gmail.com")))
            gmailUsers.push_back(names[i]);
    }

    sort(gmailUsers.begin(), gmailUsers.end());
    
    for(int index = 0; index < gmailUsers.size(); index++)
    {
        cout << gmailUsers[index] << endl;
    }
    string N_temp;
    getline(cin, N_temp);

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