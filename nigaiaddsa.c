#include <stdio.h>
#include <math.h>
int main() {
int a;
scanf ("%d", &a);
int max = -1000;
int z =0;
int current =0;
for (int i = 0; i < a; i++){
    scanf ("%d", &current);
    if (current > max){
    z++;
    max = current;
    }
}
printf ("%d",z);
return 0;
} 