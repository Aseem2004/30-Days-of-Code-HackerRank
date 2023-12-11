#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    
    try { 
        cin >> S;

        int num = stoi(S);
        cout << num;
    }
    catch (...) {
        cout << "Bad String";
    }
    return 0;

}
