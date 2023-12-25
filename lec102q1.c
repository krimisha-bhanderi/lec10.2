#include <stdio.h>

int Addition(int a[10000],int n)
{
    int i,sum=0;

     for(i=0;i<n;i++)
    {

        sum+=a[i];
    }
    return sum;
}


void main(){

   int n,i;

	printf("enter the array size: ");
	scanf("%d",&n);

	int a[n];

	printf("enter the elemnts of array:- \n");

	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}

 printf("the Sum of the Array elements is:%d",Addition(a,n));
}
