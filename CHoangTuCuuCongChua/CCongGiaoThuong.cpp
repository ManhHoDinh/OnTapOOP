#include "CCongGiaoThuong.h"

void CCongGiaoThuong::Nhap()
{
	cout << "Nhap So Luong Hang : ";
	cin >> SoHang;
	
	cout << "Nhap don gia : ";
	cin >> DonGia;
}

int CCongGiaoThuong::ktQuaCong(CHoangTu& x)
{
	if (SoHang * DonGia < x.GetTaiSan())
	{
		x.SetTaiSan(x.GetTaiSan() - SoHang * DonGia);
		return 1;
	}
	return 0;
}
