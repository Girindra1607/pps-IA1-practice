#include<stdio.h>
int input()
{
  int n;
  printf("Enter a value:");
  scanf("%d",&n);
  return n;
}
int cmp(int a,int b,int c)
{
  int largest;
  if (a>b && a>c)
  largest=a;
  else if(b>c && b>a)
  largest=b;
  else
  largest=c;
  return largest;
}
void output(int a,int b,int c,int largest)
{
  printf("Largest among a,b,c is %d",largest);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}