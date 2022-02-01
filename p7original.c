#include<stdio.h>
typedef struct _complex
{
    float real;
    float imaginary;
}Complex;

Complex input()
{
    Complex c;
    printf("Enter the real number : ");
    scanf("%f",&c.real);
    printf("Enter the imaginary number : ");
    scanf("%f",&c.imaginary);
    return c;
}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex c)
{
    printf("The sum of (%0.1f + %0.1f i) and (%0.1f + %0.1f i) is %0.1f + %0.1f i \n ", a.real, a.imaginary, b.real, b.imaginary, c.real, c.imaginary);
}
int main()
{
    Complex n1, n2, nsum;
    n1 = input();
    printf("The first complex number is (%0.1f + %0.1fi) \n",n1.real,n1.imaginary);
    n2 = input();
    printf("The second complex number is (%0.1f + %0.1fi) \n",n2.real,n2.imaginary);
    nsum = add(n1,n2);
    output(n1,n2, nsum);
    return 0;
}