#include<stdio.h>
int* func(int *a,int n,int m)
{
	int i,j;
	printf("The matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",*((a+i*n)+j));
		}
		printf("\n");
		
	}
	return a;
}
int main()
{
	int a[3][3];
	int i,j;
	int *b;
	int sum=0;
	printf("input the elements in the matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element -[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	b=func(&a,3,3);
	for (i=0;i<3;i++)
	{
		sum =sum+a[i][i];
	}
	printf("the sum of diagonal elements in the matrix:%d",sum);
  return 0;
}
	 
