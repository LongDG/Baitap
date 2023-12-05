#include<stdio.h>
#include<stdlib.h>
int a[10][10], n;
int d[20],k;
int S[20], t=0, x, out[20];


void docFile()
{
	FILE *f;
	f=fopen("D:\\Euler.txt","r");
	if(f==NULL)
	{
		printf("K tim thay tap tin");
		exit(0);
	}
	else
	{
		fscanf(f,"%d",&n);
		for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
		fscanf(f,"%d",&a[i][j]);
		}
	}
void infile()
{
	printf("Ma tran ke: \n");
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		printf(" %d",a[i][j]);
		printf("\n");
	}
}
void euler(int v){
	int S[20], out[20];
	int t = 0, t1=0;
	S[t++] = v;
	while (t>0)
	{
		int u=S[t-1];
		int k=0;
	for (int i=1;i<=n;i++)
	{
		if (a[u][i])
		{
			S[t++]=i;
		a[u][i]=a[i][u]=0;
		k=1;
		break;
		}
	}
	if (k==0)
	{
	t--;
		out[t1++]=u;
	}
	}
	printf("Chu trinh Euler cua dinh (%d) la :\n" );
	for(int i=t1-1;i>=0;i--)
	{
		printf("%d",out[i]);
    	if (i>0) 
		printf(" -> ");
	}
}
int ktdx(int a[10][10],int n)
{   
    int u=S[t-1];
	for(int i=1;i<=n;i++)
	{
		for(int u=1;u<=n;u++)
		{
			if(a[i][u]!=a[u][i])
			{
				return 0;
			}
			
		}
	}
	return 1;
}
int main()
{
	docFile();
	infile();
    int x;
    
    if (ktdx(a,n)==0){
    
    	printf("khong co ct");
    }
    else{
    printf("Nhap dinh can duyet x: ");
	scanf("%d",&x);
    euler(x);
}
   
    return 0;
}
