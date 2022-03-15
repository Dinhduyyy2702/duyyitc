#include<iostream>
#include<math.h>
using namespace std;
//Bai  1: ÐÊ  CHÃN
int main()
{
	int n, a, b, c;
	int dem = 0, s=0;
	cout << "Nhap vao so n " ;
	cin >> n;
	a=n;
	b=n;
	do
	{
		a=a/10;
		dem++;
	}while(a>0);
	do
	{
		c=b%10;
	    s=s+pow(c,dem);
		b=b/10;
	}while(b>0);
	if(s==n){
	cout << " so " << n << " la so armstrong " ;
	}
	else{
	cout << " so " << n << " khong phai la so armstrong";
	}
	return 0;
} 


