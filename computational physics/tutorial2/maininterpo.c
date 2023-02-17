#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"interpo.h"
float f[]={0,1.386294,1.791759, 2.079441, 2.302585};
float x[]={1, 4, 6, 8, 10};
float diff();
float lf();
int main(){
    printf("Enter the number of data points:");
    int n;
    scanf("%d",&n);
    float xv;
    printf("Enter the point where the value of function need to be determined:");
    scanf("%f",&xv);
    float fn= f[0];
    float p=1;
    float fl=0;
    for(int k=1;k<n;k++){
        p=p*(xv-x[k-1]);
        fn=fn+diff(0,k)*p;}
    for(int i=0;i<n;i++){
        fl+=lf(i,n)*f[i];
    }
        printf("%f\n%f\n",fn,fl);}