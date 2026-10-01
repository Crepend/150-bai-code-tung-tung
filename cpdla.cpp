#include <stdio.h>
#include <math.h>
int main() {
int a;
scanf ("%d", &a);
int e = 0;
int z = 0;
do{
    while (a>0){
    e = a%10;
    z += e;
    a /=10;
    } 
    if (z<10){printf ("%d",z);}
    else {a = z;
          e = 0;
          z = 0;}} while (a>=10);
    return 0;
}