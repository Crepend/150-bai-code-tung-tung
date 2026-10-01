#include <stdio.h>
#include <string.h>

int main() {
int a;
int b;
scanf ("%d",&a);
scanf ("%d",&b);
int chuvi = (a+b)*2;
int dientich = a*b;
if (a <0 || b <0){
    printf ("Day khong phai la 2 kich thuoc cua mot hinh chu nhat\n");
    if (a <0 && b >= 0){
        printf ("a la so am");
    }
    else if (a >=0 && b < 0){
        printf ("b la so am");
    }
    else if (a <0 && b < 0){
        printf ("a va b la so am");
    }
 }
else {
    printf ("Day la 2 kich thuoc cua mot hinh chu nhat\n");
    printf ("%d %d",chuvi,dientich);
}
     return 0;
}