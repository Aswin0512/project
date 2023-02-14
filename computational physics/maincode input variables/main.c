#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include "myheader.h"
int myfunc(int v1, int v2);
int n;
int main(int argc, char *argv[]){
if(argc<1+1){
printf("ERROR!! %s <n value>\n",argv[0]);
exit(1);
}
n = atoi(argv[1]);
printf("%d\n", myfunc(1,2));
}