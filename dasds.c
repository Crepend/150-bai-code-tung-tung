#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
int main() {
int a;
scanf ("%d", &a);
int progress[100000]={0};
int z = 0;
int mom =0;
int max = -100;
for (int i = 0; i < a;i++){
scanf ("%d",&progress[i]);}
int y = 0;
for (int i = 0; i < a;i++){
    for (int j =1; j <= progress[i];j++){
    if (progress[i]%j==0){
        z++;
    }
    }
    if (z==2 && progress [i]>max){
        y++;
        max = progress [i];
        mom = i;
    }
    z = 0;
}
printf ("%d %d", max,mom);
return 0;}