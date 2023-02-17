#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

float h=0.5;

float f(float x, float y){
    return (-2*(x*x*x)+12*(x*x)-20*x+8.5); // f(x,y)=dy/dx
}
float ys(float x){
    return (-0.5*(x*x*x*x)+4*(x*x*x)-10*(x*x)+8.5*x+1); // true solution
}
float eu(float yi,float xi){
    float yi1= yi + f(xi,yi)*h; // Euler method
    return yi1;
}
float he(float yi,float xi){
    float yi1= yi+ (f(xi,yi)/2+f(xi+h,yi + f(xi,yi)*h)/2)*h; // Heun's method
    return yi1;
}
float mi(float yi,float xi){
    float yi1= yi+ f(xi+h/2,yi+f(xi,yi)*h/2)*h; // midpoint method
    return yi1;
}
float ra(float yi,float xi){
    float yi1= yi+ (f(xi,yi)/3+2*f(xi+3*h/4,yi+3*f(xi,yi)*h/4)/3)*h; // Ralston's method
    return yi1;
}
int main(){
    FILE *rk2;

    rk2=fopen("rk2.txt","w");
    printf("%5s %10s %6s %5s %8s %7s %6s %6s %6s %6s \n","x(i+1)","True value","Euler","Heun","Midpoint","Raltson","Er1","Er2","Er3","Er4");
    float xi=0;
    float yi1=1;
    float yi2=1;
    float yi3=1;
    float yi4=1;
    for(int i=0;i<=7;i++){
        
        printf("%5.2f %10.2f %6.2f %5.2f %8.2f %7.2f %6.2f %6.2f %6.2f %6.2f \n",(i+1)*0.5,ys(xi+h),eu(yi1,xi),he(yi2,xi),mi(yi3,xi),
        ra(yi4,xi),(ys(xi+h)-eu(yi1,xi)),(ys(xi+h)-he(yi2,xi)),-(ys(xi+h)-mi(yi3,xi)),(ys(xi+h)-ra(yi4,xi)));
        fprintf(rk2,"%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",(i+1)*0.5,ys(xi+h),eu(yi1,xi),he(yi2,xi),mi(yi3,xi),
        ra(yi4,xi),(ys(xi+h)-eu(yi1,xi)),(ys(xi+h)-he(yi2,xi)),-(ys(xi+h)-mi(yi3,xi)),(ys(xi+h)-ra(yi4,xi)));
        yi1=eu(yi1,xi);
        yi2=he(yi2,xi);
        yi3=mi(yi3,xi);
        yi4=ra(yi4,xi);
        xi=xi+h;
        }
}