#include<stdio.h>
int main() 
{
  char a[100];
  int b=0,i,j;
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {
      b++;
  }
  for(i=b;i>=0;i--)
  {
  printf("%c",a[i]);
  }
  return 0;
}
