#include <stdio.h>
#include <stdlib.h>

int a[10][10], n;
void docfile()
{
	FILE* f;
	f=fopen("matran.txt","r");
	if(f == NULL)
	{
		printf("khong the mo file .");
		exit(0);
	}
	else{
			fscanf(f,"%d",&n);
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					fscanf(f,"%d",&a[i][j]);
				}
			}		
		}
		fclose(f);				
}
void infile(){
	printf("\n ma tran ke: \n");
	for(int i=1;i<=n;i++)
	{
				for(int j=1;j<=n;j++)
				{
					printf("%2d",a[i][j]);
				
				}
			printf("\n");
	}
}


int ktdx(int a[10][10],int n)
{
	for(int i=1;i<=n;i++)
	{
				for(int j=1;j<=n;j++)
				{
					if(a[i][j] != a[j][i]){
						return 0;
					}
				}
	}
	return 1; 
}
int ktddt(int a[10][10], int n)
{
	for(int i=1;i<=n;i++)
	{
				for(int j=1;j<=n;j++)
				{
					if(a[i][j]>1)
					{
						return 0;
					}
				}
	}
	return 1;
}
int ktgdt(int a[10][10],int n)
{
		for(int i=1;i<=n;i++)
	{
			if(a[i][i]!=0)
			{
				return 1;
			}
			
	}
	return 0;

}


int main(){
	docfile();
	infile();

	if(ktdx(a,n)==1)
	{
		if(ktgdt(a,n)==1)
		{
			printf("\nma tran la gia do thi");
		}
		else
		{
			if(ktddt(a,n)==1){
				printf("\nma tran la do thi don vo huong.");
			}else 
				{
				printf("\nma tran la do thi da vo huong");
			   	}
		}
	}
	else
	{
		if(ktddt(a,n)==1)
		{
			printf("\nma tran la do thi don co huong");
		}
		else
		{
			printf("\nma tran la do thi da co huong");
		}
	}
}
