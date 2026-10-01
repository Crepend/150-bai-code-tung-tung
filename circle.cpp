#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int a;
    scanf ("%d", &a);
    int b;
    scanf ("%d", &b);
    int c;
    scanf ("%d", &c);
    int d = a+b+c;
    double g = d/2;
    double e = sqrt(g*(g-a)*(g-b)*(g-c));
    if (a + b >c && c +a >b && c+b>a){
        printf ("Day la 3 canh cua mot tam giac\n");
        printf ("%d %.1lf",d,e);}
    else {
    printf ("Day khong phai la 3 canh cua mot tam giac");
    }
    return 0;
}
