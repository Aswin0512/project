#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int odd(int n){
    printf("The first %d odd numbers are :",n);
    for ( int i = 0; i < n; i++){
        printf("%d\n",2*i+1);
}}
int prime(int n){
    printf("The first %d prime numbers are :\n",n);
    printf("%d\n%d\n%d\n",2,3,5);
    int h=0;
    int k=7;
    int i=0;
    while (h<n-1){
    for (i = 3; i < (k/2); i+=2){
        if (k%i ==0)
        {
            k +=2;
            break;
        }};
    printf("%d\n",k);
    h+=1;
    k +=2;
    };}
int five(int n){
    printf("The first %d multiples of 5 are :",n);
    for ( int i = 1; i < n+1; i++){
        printf("%d\n",5*i);
}}
int main(){printf("input type(1-odd, 2-prime, 3-five):");
int type;
scanf("%d",&type);
printf("input n:");
int n;
scanf("%d",&n);
if (type==1){
    odd(n);};
if (type==2){
    prime(n);};
if(type==3){
    five(n);};}