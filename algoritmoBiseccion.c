#include<stdio.h>
#include<math.h>
double f(double x){
    double resultado= x*sin(x);    
    return resultado;
}

void main()
{
    float a=3,b=4,m=(a+b)/2;
    printf("a       |b       |f(b)       |f(a)     |m     \n");
    printf("%f|%f|%f|%f|%f\n",a,b,f(a),f(b),m);
    int k,iteraciones=3;
    for ( k = 0; k<iteraciones; k++)
    {
        m=(a+b)/2;
        if(f(a)*f(m)<0)
        {
            b=m;
            m=(a+m)/2;
            
        }else
        {
            a=m;
            m=(b+m)/2;
            
        }
        printf("%f|%f|%f|%f|%f\n",a,b,f(a),f(b),m);
    }
}
// https://www.programiz.com/c-programming/online-compiler/