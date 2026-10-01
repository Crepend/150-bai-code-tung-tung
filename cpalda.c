#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  
    int a;
    scanf ("%d",&a);
    int b;
    scanf ("%d",&b);
    int max = 0;
    int one = abs(a);
    int two = abs(b);
    if (one >= two) {
        two = one;
    }
    else {
        one = two;
    }
    for (int i = 1; i <= two; i++){
    if (a%i == 0 && b%i ==0 && i > max){
        max = i;
    }
    }
    printf ("%d", max);
    return 0;
  }