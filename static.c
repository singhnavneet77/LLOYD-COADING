#include<stdio.h>
void sum();
int x=1;
void main() {
    sum();
    int a=9;
    a=a+x;
    printf("%d\n",a);
}
void sum() {
    static int y=10;
    x=x+y;
    printf("%d\n",x);
}
