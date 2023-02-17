#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"interpo.h"
float xv;
float lf(int i, int n){
    float l=1;
    for(int j=0;j<n;j++){
        if(j!=i){
            l=l*(xv-x[j])/(x[i]-x[j]);
        }
    }
    return l;
}