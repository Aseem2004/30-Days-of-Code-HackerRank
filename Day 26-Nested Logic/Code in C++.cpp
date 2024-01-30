#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int A_day, A_month, A_year, R_day,R_month, R_year;
    int fine = 0;

    cin >> A_day;
    cin >> A_month;
    cin >> A_year;
    cin >> R_day;
    cin >> R_month;
    cin >> R_year;
    
    if (A_year == R_year){
        if (A_month == R_month){
            fine = 15 * (A_day - R_day);
        }
        else {
            fine = 500 * (A_month - R_month);
        }
    }
    else if (A_year > R_year){
        fine = 10000;
    }
    
    if (fine < 0){
        fine = 0;
    }
    
    cout << fine;  
    return 0;
}
