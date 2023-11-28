#include <stdio.h>
#define vc 1000 
#include<stdlib.h>
int a[10][10],n,L[10],d[10],T[10];
void docfile()
{
	FILE*f;
	f=fopen("D:\\matran.txt","r");
	if(f==NULL)
	{
		printf("khong tim thay tap tin");
		exit(0);
	}
	else{
		fscanf(f,"%d",&n);
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		fscanf(f,"%d",&a[i][j]);

}
	fclose(f);

}
void infile()
{
	printf("Ma tran ke: \n");
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		
		printf("%2d",a[i][j]);
		printf("\n");
	
	}
}
void khoitao(int s)
{
	for(int i=1;i<=n;i++)
	{
	L[i]=vc;
	d[i]=1;
    }
    L[s]=0;
}
int vitridinhmin()
{
	int min=vc,vt;
	for(int i=1;i<=n;i++)
	if(d[i]==1&&min>=L[i])
		{
			min=L[i];
			vt=i;
		}	
	return vt;
}
void capnhatke(int p)
{
	for(int i=1;i<=n;i++)
	{
		if(a[p][i]!=0 && d[i]==1)
		{
		 if(L[i]>L[p]+a[p][i])	
		 {
		 	L[i]=L[p]+a[p][i];
		 	T[i]=p;
		 }
	   }
    }
}
void timduong(int f)
{
while(T[f] !=0)
{
	
 printf("%d\t",T[f]);
 f=T[f];
}
}
int main()
{
	docfile();
	infile();
	int s,f,lap=0;
	printf("\nNhap dinh xuat phat: ");
	scanf("%d",&s);
	khoitao(s);
	while(lap!=n-1)
	{
		int u=vitridinhmin();
		capnhatke(u);
		d[u]=0;
		lap++;
  }
  for(int i=1;i<=n;i++)
  {
  	printf("%d\t",L[i]);
  }
  printf("\nNhap dinh ket thuc: ");
  scanf("%d",&f);
  printf("\nDuong di ngan nhat tu %d den %d co do dai la  %d ",s,f,L[f]);
  printf("\nCac dinh di qua la: ");
  timduong(f);
}
