#include <stdio.h>
void sum(int n)
{ int i,s=0;
  while(n%10>0)
  { s+=n%10;
    n/=10;
  }
  if(s%10==0)
  printf("Sum of digits : %d ",s);
  else
  { n=s;
    sum(n);
  }
}
int main()
{ int n;
  printf("Input number : ");
  scanf("%d",&n);
  sum(n);
  return 0;
}
