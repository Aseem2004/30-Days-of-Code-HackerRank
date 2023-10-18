#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int integer_;
    double double_;
    char string_[100];
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d\n",&integer_);
    scanf("%lf\n",&double_);
    fgets(string_, 100, stdin);

    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+integer_);
    
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",d+double_);
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s",s,string_);


    return 0;
}