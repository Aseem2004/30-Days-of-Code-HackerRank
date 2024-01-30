#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A_day, A_month, A_year, R_day,R_month, R_year;
    int fine = 0;
    scanf("%d %d %d %d %d %d", &A_day, &A_month, &A_year, &R_day, &R_month, &R_year);
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
    
    printf("%d", fine);  
    return 0;
}
