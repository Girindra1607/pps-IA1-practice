#include<stdio.h>
void stringinput(char (*a)[50], char (*b)[50])
{
  printf("Enter First String:");
	scanf("%s",a[0]);
	printf("Enter Second String:");
	scanf("%s",b[0]);
}
int stringcmp(char *a, char *b)
{
	int i = 0;
	while(a[i]&& (a[i] == b[i]))
	{
    i++;
  }	
	return  a[i] - b[i];		
}
void output(char *a, char *b, int result)
{
	if (result<0)
	  printf("%s is greater than %s ",b,a);
	else if (result >0)
	  printf("%s is greater than %s ",a,b);
	else
	  printf("%s is equal to %s ",a,b);
}
int main()
{
	char a[50],b[50];
	stringinput(&a,&b);
	int result;
	result = stringcmp(a,b);
	output(a,b,result);
	return 0;
} 