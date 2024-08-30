#include<stdio.h>
int main()
{
 int n , num ,item ,i,k,k1,k2;
 printf("enter the size of the array \n ");
 scanf("%d", &n);
 int ar[n+1];
 
 printf("enter the elements of the array \n ");
	for(i =0 ; i<n;i++)
	{
		printf("enter the %d element array ", i);
		scanf("%d",&ar[i]);
	}
	printf("the elements of the array are : \n");
		for(i =0 ; i<n;i++)
	{
		printf(" %d \t", ar[i]);
	
	}
	printf("enter the element after which you want the new element to be inserted \n");
	scanf("%d", &num);
	printf("enter the element you want to add");
	scanf("%d", &item);
	
		for(i = 0 ; i<n ;i++)
	{
		if(ar[i]==item)
		{
			k1=i;
			 k2=i;
			break;
		}
	}

	
	k1=k1+1;
	for(i = k1;i<n;i++)
	{
		ar[i+1]=ar[i+2];
	}
	ar[k]=item;
		printf("the elements of the array are : \n");
		for(i =0 ; i<n;i++)
	{
		printf(" %d \t", ar[i]);
	
	}
}