#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void swapv(int x, int y)
{
int t;
t = x;
x = y;
y = t;
printf("x=%d y=%d\n", x, y);
}
void swapa(int* x, int* y)
{
int t;
t = *x;
*x = *y;
*y = t;
printf("x=%d y=%d\n", *x, *y);
}
int main(int argc, char* argv[]
){
    int a=2;
    int b = 3;
    //swapv(a, b);
    swapa(&a,&b);
    
}