#include <stdio.h>
#include <string.h>

int main() {
  
    char number[8];
    scanf ("%s",&number);
    int first = number[0]-'0';
    int second = number[1]-'0';
    int third = number[2]-'0';
    int fourth = number[3]-'0';
    int fifth = number[4]-'0';
    int sixth = number[5]-'0';
    int seventh = number[6]-'0';
    int eighth = number[7]-'0';
    int nigga = 0;
    if (eighth % 2 ==1){
        printf ("%d ",eighth);
        nigga++;
    }
    if (seventh % 2 ==1){
        printf ("%d ",seventh);
        nigga++;
    }
    if (sixth % 2 ==1){
        printf ("%d ",sixth);
        nigga++;
    }
    if (fifth % 2 ==1){
        printf ("%d ",fifth);
        nigga++;
    }
     if (fourth % 2 ==1){
        printf ("%d ",fourth);
        nigga++;
    }
    if (third % 2 ==1){
        printf ("%d ",third);
        nigga++;
    }
    if (second % 2 ==1){
        printf ("%d ",second);
        nigga++;
    }
    if (first % 2 ==1){
        printf ("%d ",first);
        nigga++;
    }
    if (nigga ==0){
        printf ("-");
    }
    return 0;
  }