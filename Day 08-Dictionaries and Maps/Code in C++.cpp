#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    string input;
    map<string,string>m;
    cin >> num;
    cin.ignore();
    for (int i=0; i<num; i++){
        getline(cin, input);
        size_t space=input.find(" ");
        string s1=input.substr(0,space);
        string s2=input.substr(space+1);
        m.insert(pair<string,string>(s1,s2));
    }
    
    string name;
    map<string,string>::iterator itr;
    while(getline(cin,name)){
        itr=m.find(name);
        if (itr!=m.end())
        cout<<itr->first << "=" << itr->second <<endl;
        else
         cout << "Not found" <<endl;
    }
    return 0;
}
