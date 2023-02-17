#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"interpo.h"
float f[]={0,1.386294,1.791759, 2.079441, 2.302585};
float x[]={1, 4, 6, 8, 10};
float diff(int i, int j){
    if(i-j == 1 || j-i == 1){
        return (f[i]-f[j])/(x[i]-x[j]);
        }
    else{
        return (diff(i,j-1)-diff(i+1,j))/(x[i]-x[j]);
        }
}
int main(){
    int i,j;
    scanf("%d\t%d",&i,&j);
    printf("%f",diff(i,j));
}