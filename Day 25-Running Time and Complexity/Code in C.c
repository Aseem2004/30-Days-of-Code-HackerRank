#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int x,i;
    scanf("%d",&x);
    
    while(x--){
        
        int n;
        scanf("%d",&n);
        int s=0;
        
        if(n<2)
        printf("Not prime\n");
        
        else{
            
            for(i=2;i*i<=n;i++){
                
                if(n%i==0){
                    s=1;
                    break;
                }
            }
            
            if(s==1)
            printf("Not prime\n");
            
            else
            printf("Prime\n");
        }
        
    }

    return 0;
}
