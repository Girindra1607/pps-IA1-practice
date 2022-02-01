#include<stdio.h>
typedef struct _complex
{
    float real;
    float i;
}complex;
int get_n()
{
    int n;
    printf("Enter the number of complex numbers to be added :");
    scanf("%d", &n);
    return n;
}
complex input_complex()
{
    complex c;
    printf("Enter the real part : ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part : ");
    scanf("%f", &c.i);
    return c;
}

complex add(complex a, complex b)
{
    complex sum;
    sum.real = a.real + b.real;
    sum.i = a.i + b.i;
    return sum;
}


void input_n_complex(int n, complex c[n])
{
  for(int i=0; i<n; i++)
  {
    c[i] = input_complex();
  }
}

complex add_n_complex(int n, complex c[n])
{
    complex sum;
    sum.real = 0;
    sum.i = 0;
    for(int i = 0; i < n; i++){
        sum = add(sum, c[i]);
    }
    return sum;
}
void output(int n, complex c[n], complex result)
{
    if(n==1)
    {
      printf("The sum of %0.1f + %0.1fi is %0.1f + %0.1fi\n", c[0].real, c[0].i, result.real, result.i);
    }
    else
    {
        printf("The sum of ");
        for(int i=0; i<n-1; i++)
        {
            printf("(%0.1f + %0.1fi) + ", c[i].real, c[i].i);
        }
        printf(" (%0.1f + %0.1fi) is %0.1f + %0.1fi\n", c[n-1].real, c[n-1].i, result.real, result.i);
    }
}
int main()
{
    int n = get_n();
    complex c[n],sum;
    input_n_complex(n,c);
    sum = add_n_complex(n,c);
    output(n,c,sum);
    return 0;
}