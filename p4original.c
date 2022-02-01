#include<stdio.h>
int input()
{
  int n;
  printf("Enter array size:");
  scanf("%d",&n);
  return n;
}
void aray(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("Enter a value:");
    scanf("%d",&a[i]);
  }
}
int sum_n(int n,int a[n])
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    sum+=a[i];
  }
  return sum;
}
void output(int n,int a[n],int sum)
{
  int j;
  for(j=0;j<n-1;j++)
  {
    printf("%d +",a[j]);
  }
  printf("%d is %d",a[n-1],sum);
}
int main()
{
  int n,i,sum;
  n=input();
  int a[n];
  aray(n,a);
  sum=sum_n(n,a);
  output(n,a,sum);
  return 0;
}

