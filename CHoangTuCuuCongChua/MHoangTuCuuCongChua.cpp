#include"CLauDai.h"

int main()
{
	CLauDai a;
	CHoangTu b;

	cout << "Nhap thong tin cua lau dai : ";
	a.Nhap();
	
	cout << "Nhap thong tin hoang tu : ";
	b.Nhap();
	
	if (a.ktGiaiCuuCongChua(b) == 1)
	{
		cout << "Cuu duoc cong chua ";
		cout << "\nThong tin sau khi vuot qua lau dai : ";
		b.Xuat();
	}
	else
		cout << "Khong giai cuu duoc cong chua";
}
