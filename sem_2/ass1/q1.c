#include <stdio.h>
#include <conio.h>
int main(){
    int a, b;
    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    a^=b;
    b^=a;
    a^=b;
    printf("a:%d \nb:%d", a, b);
    return 0;
}
