#include <stdio.h>
void nhap(int a[], int n);
void xuat(int a[], int n);
void timx(int a[], int n);
void GTLN(int a[], int n);
void GTNN(int a[], int n);
void le(int a[], int n);
void tong(int a[], int n);
int main()
{
	int a[100],n;
	printf("nhap so pt :  ");
	scanf("%d",&n);	
	nhap(a,n);
	xuat(a,n);
	timx(a,n);
	GTLN(a,n);
	GTNN(a,n);
	tong(a,n);
	le(a,n);
}

void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
    	printf("nhap phan tu thu %d :  ",i);
    	scanf("%d",&a[i]);
	}
	
}

void xuat(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void timx(int a[], int n)
{
	int x;
	int co = 0;
	printf("\n nhap pt x:  ");
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(a[i] == x)
		{
			printf("\n gia tri phan tu thu %d la x ",i);
			co = 1;
			break;
		}
		if(co!= x) 
		{
				printf("\n gia tri x khong co trong mang");			
		}
	}

}
void GTLN(int a[], int n)
{
	int max = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] >max)
		max=a[i];
	}
	printf("\nphan tu lon nhat la %d", max);
}
void GTNN(int a[], int n)
{
	int min = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] <min)
		min=a[i];
	}
	printf("\nphan tu nho nhat la %d", min);
}

void le(int a[], int n)
{
	printf("\ncac phan tu le:  ");
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		printf("\n%d",a[i]);
		
	}
}

void tong(int a[], int n)
{
	int tong =0;
	for(int i=0;i<n;i++)
	{
		tong=tong+a[i];
	}
	printf("\ntong cac pt trong mang la:  %d", tong);
}
