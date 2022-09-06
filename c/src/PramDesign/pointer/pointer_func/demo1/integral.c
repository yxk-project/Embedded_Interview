#include<stdio.h>

int main(){
    float integral(float,float,float (*f)(float));
    float func(float);
    printf("%f",integral(2.0f,44.0f,func));
    return 0;
}
float func(float x){
    return x*x+3*x+1;
}

float integral(float a,float b,float (*f)(float)){
    int precision=1000;
    float step;
    float result;
      if(a<=b){
          step=(b-a)/precision;
      }
      else {
          step=(a-b)/precision;
      }
    for(int i=0;i<b-a;i+=step){
        result+=(f(a+i)+f(a+i+step))/2;
    }
    return result*step;
}