#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"interpo.h"

float diff(int i, int j){
    if(i-j == 1 || j-i == 1){
        return (f[i]-f[j])/(x[i]-x[j]);
    }
    else{(diff(i,j-1)-diff(i+1,j))/(x[i]-x[j]);}
}