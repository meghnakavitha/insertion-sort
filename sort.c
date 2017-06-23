# include<stdio.h>

int sort(int *a,int n)
{
  int i,j,k;
  for(i=1;i<n;i++)
    {
      k=a[i];
      for(j=i-1;j>=0&&k<a[j];j--)
	{
	
	      a[j+1]=a[j];
	      a[j]=k;
	}
    }
}

int read(int *a)
{
  int size,i;
printf("%d",&size);
  for(i=0;i<size;i++)
    {
     scanf("%d",&a[i]);
    }
  return size;
}
main()
{
  int a[20],s;
  int size=read(a);
  sort(a,size);
  
	  for(s=0;s<size;s++)
	    printf("%d\t",a[s]);
	  printf("\n");
}
