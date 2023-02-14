#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"interpo.h"
float f[]={0,1.386294,1.791759, 2.079441, 2.302585};
float x[]={1, 4, 6, 8, 10};
float diff();
int main(){int n=4;
    float xv=2;
    float f4= f[0];
    float p=1;
    for(int k=1;k<5;k++){
        p=p*(xv-x[k-1]);
        f4=f4+diff(0,k)*p;}
        printf("%f",f4);}