#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) 
{
    int s[n], d = 0, q = 0;
    s[0] = a, s[1] = b, s[2] = c;
    
    if (n >= 3) {
        for (int i = 3; i < n; i++) {
            d = s[i - 1] + s[i - 2] + s[i - 3]; // Calculate the sum of the previous three terms.
            s[i] = d; // Store the sum in the array.
        }
    }
    
    return s[n - 1];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
