#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   char inputString[105]; 
   scanf("%[^\n]", inputString); 
  
   // Your first line of output goes here
   printf("Hello, World.\n");

   // Write the second line of output
   printf("%s", inputString);

   return 0;
}