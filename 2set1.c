#include<stdio.h>
void main()
{
  int a,n,num[50],i,j;
  printf("enter the limit");
  scanf("%d",&n);
  printf("enter the number");
  for(i=0;i<n;++i)
  {
      scanf("%d",&num[i]);
  }
  for(i=0;i<n;++i)
  {
      for(j=i+1;j<n;++j)
  {
      if(num[i]<num[j])
  {
      a=num[i];
      num[i]=num[j];
      num[j]=a;
  }
  }
  }
  for(i=0;i<n;++i)
  printf("\n %d",num[i]);
}
