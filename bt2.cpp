#include <stdio.h>
void nhap(int a[50][50], int n, int m);
void xuat(int a[50][50], int n, int m);
void tong(int a[50][50], int n, int m);
void tongcot(int a[50][50], int n, int m);
void tongchan(int a[50][50], int n ,int m);
void ktduongcheo(int a[50][50], int n ,int m);
void KTMT(int a[50][50], int n ,int m);
void doixungduongcheo(int a[50][50], int n, int m);
int main()
{
	int a[50][50];
	int n, m, x, y;
	printf("\n nhap so dong :  ");
	scanf("%d",&n);
	printf("\n nhap so cot :  ");
	scanf("%d",&m);
	nhap(a,n,m);
	xuat(a,n,m);
	
	
	printf("Nhap x: ");
    scanf("%d", &x);
    int max = a[x][0];
    for (int j = 1; j < n; j++) {
        if (a[x][j] > max) {
            max = a[x][j];
        }
    }
    printf("Phan tu lon nhat tren hang %d: %d\n", x, max);
	
	
  printf("\nNhap y: ");
    scanf("%d", &y);
    int min = a[0][y];
    for (int i = 1; i < n; i++) {
        if (a[i][y] < min) {
            min= a[i][y];
        }
    }
    printf("Phan tu nho nhat tren cot %d: %d\n", y, min);
	
	
	//tong(a,n,m);
//	tongcot(a,n,m);
//	tongchan(a,n,m);
//	ktduongcheo(a,n,m);
	KTMT(a,n,m);
	doixungduongcheo(a,n,m);
	
}


void nhap(int a[50][50], int n, int m)

{
	for(int i=0;i<n;i++){
	
	for(int j=0;j<m;j++){
	
		
			printf("\nnhap a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		
	}
}
}


void xuat(int a[50][50], int n, int m)
{
  printf("ma tran vua nhap la:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void tong(int a[50][50], int n, int m)
{
	int k = a[k][0];
	printf("\n nhap k:  ");
	scanf("%d",&k);
	
	int tong =0;
	 for (int j = 0; j < m; j++) {
		tong = tong + a[k][j];
	}
	printf("\n tong hang %d la : %d ",k ,tong);
}
void tongcot(int a[50][50], int n, int m)
{
//	int m = a[0][m];
	printf("\n nhap m:  ");
	scanf("%d",&m);
	
	int tongcot =0;
	 for (int i = 0; i < n; i++) {
		tongcot = tongcot + a[i][m];
	}
	printf("\n tong cot %d la : %d ",m ,tongcot);
}

void tongchan(int a[50][50], int n ,int m)
{
	int tongchan = 0;
	 for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        	if(a[i][j]%2==0)
        	tongchan=tongchan + a[i][j];
		}
	
	}
		printf("\n tong chan cua matran la : %d ",tongchan);	
}

void ktduongcheo(int a[50][50], int n ,int m)
{
	bool check = 1;
	for(int i=0;i<n;i++)
	{
		if(a[i][i] != 0)
		check = 0;
		break;
	}
	if(check)
	{
		printf("\n duong cheo bang 0");
		
	}else {
		printf("\n duong cheo khac bang 0");	
	}
}

void KTMT(int a[50][50], int n ,int m)
{
	printf("kiem tra ma tran lon hon 1");
	int KTMT = 1;
	 for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        	if(a[i][j]>1)
        	KTMT = 0;
        	break;
		}
	
		}
		if(KTMT)
		{
			printf("\n yes");
		}else {
				printf("\n no");
		
				}
}

void doixungduongcheo(int a[50][50], int n, int m)
{
		int doixung = 1;
	 for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        	if(a[i][j] != a[j][i])
        	doixung = 0;
        	break;
		}
	
		}
		if(doixung)
		{
			printf("\n doi xung");
		}else {
				printf("\n khong doi xung");
		
				}
}
