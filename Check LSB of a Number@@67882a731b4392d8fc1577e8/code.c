#include <stdio.h>

int main(){
    int a, lsb;
    scanf("%d",&a);
    int lsb=(a&1);
    if (lsb){
        printf("Set");
    }
    else{
        printf("Not Set")
    }
}