#include<stdio.h>
float input()
{
  float n;
  printf("Enter the value:");
  scanf("%f",&n);
  return n;
}
float sqrt_root(float n)
{
  float temp,sqrt;
  sqrt=n/2;
  temp=0;
  while(sqrt !=temp)
  {
    temp=sqrt;
    sqrt=(n/temp+temp)/2;
  }
  return sqrt;
}
void output(float n,float sqrt)
{
  printf("Square root of %0.2f is %0.2f",n,sqrt);
}
int main()
{
  float n,sqrt;
  n=input();
  sqrt=sqrt_root(n);
  output(n,sqrt);
  return 0; 
}