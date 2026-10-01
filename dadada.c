#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
int array[1000005] = {0};

int main() {
    int z = 0;
    int a;
    char empty;
while (scanf("%d%c", &a, &empty) == 2) {
   array[z] = a;
   z++;
if (empty == '\n'){
    break;
}
}
int c;
scanf ("%d",&c);
array [z]=c;
for (int g = 0; g<=z;g++){
    printf("%d\n", array[g]);
    }
    return 0;
}