#include <stdio.h>

int main(){
    int a, lsb;
    scanf("%d",&a);
    if (a&1){
        printf("Set");
    }
    else{
        printf("Not Set")
    }
}