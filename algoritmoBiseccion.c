#include<stdio.h>
#include<math.h>
double f(double x){
    double resultado= x*sin(x);    
    return resultado;
}

void main()
{
    float a=3,b=4;
    printf("%f|%f\n",f(a),f(b));
    float m=(a+b)/2;
    if(f(a)*f(m)<0)
    {
        m=(a+m)/2;
        b=m;
    }else{
        m=(b+m)/2;
        a=m;
        printf("%f",a);
    }
    printf("%f",m);
    

}
