#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int a_and,b_or,c_xor,d=0,e=0,f=0;
  for(int i=1 ; i<=n;i++)
  { 
      for(int j=i+1;j<=n;j++)
      {
         a_and = i&j;
         if(a_and<k && a_and>d)
         {
             d=a_and;
         }
         
         b_or = i|j;
         if(b_or<k && b_or>e)
         {
             e=b_or;
         }
         
         c_xor = i^j;
         if(c_xor<k && c_xor>f)
         {
             f=c_xor;
         }
      }
  }
  printf("%d\n%d\n%d\n",d,e,f);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
    
