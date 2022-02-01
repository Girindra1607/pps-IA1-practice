#include<stdio.h>
int input()
{
  int num;
  printf("Enter a positive integer:");
  scanf("%d",&num);
  return num;
}
int sum_n(int num, int count, int sum)
{
  for(count=1;count<=num;count++)
  {
    sum+=count;
  }
  return sum;
}
void output(int sum, int num)
{
  int j;
  for(j=1;j<num;j++)
  {
    printf("%d+",j);
  }
    printf("%d is:%d",j,sum);
  
}
int main()
{
  int num,count,sum=0;
  num=input();
  count=sum_n(num,count,sum);
  sum=sum_n(num,count,sum);
  output(sum,num);
  return 0;
}