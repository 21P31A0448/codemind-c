
#include<stdio.h>
int main()
{
  int n,r,temp=0,res=0;
  scanf("%d",&n); 
  temp=n;
  while(n!=0)
  {
    r=n%10;
    res=(res*10)+r; 
    n=n/10;
  }
  if(temp==res) 
  printf("True");
  else
  printf("False");
}
