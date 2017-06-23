# include<stdio.h>
int main()
{
int a[7]={4,23,43,38,15,10,30};
int i,j,k,s;
for(i=1;i<7;i++)
    {
      k=a[i];
      for(j=i-1;j>=0&&k<a[j];j--)
	{
	
	      a[j+1]=a[j];
	      a[j]=k;
	}
	  
	  for(s=0;s<7;s++)
	    printf("%d\t",a[s]);
	  printf("\n");
    }
  

}
