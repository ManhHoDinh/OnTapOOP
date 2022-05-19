#include "CCongVien.h"
void CCongVien::Nhap()
{
	cout << "Nhap so luong ve : ";
	cin >> SoLuongVe;
	DanhSachVe = new CVe * [SoLuongVe];
	for (int i = 0; i < SoLuongVe; i++)
	{
		cout << "Nhap thong tin ve thu " << i + 1 << " : ";
		cout << "\n0. Ve tron goi ";
		cout << "\n1. Ve tung phan ";
		cout << "\nNhap lua chon : ";
		int Choose;
		cin >> Choose;
		if (Choose == 0)
			DanhSachVe[i] = new CVeTronGoi;
		else
			DanhSachVe[i] = new CVeTungPhan;
		DanhSachVe[i]->Nhap();
	}
}
void CCongVien::Xuat()
{
	cout << "\n======================================";
	cout << "\nThong tin cua cong vien : ";
	cout << "\nSo luong ve : " << SoLuongVe;
	cout << "\nDanh sach cac ve : ";
	for (int i = 0; i < SoLuongVe; i++)
		DanhSachVe[i]->Xuat();
	cout << "\nSo luong ve tung phan : " << DemVeTungPhan();
	cout << "\nTong tien cua cong vien thu duoc : " << TinhTien();
}
long CCongVien::TinhTien()
{
	long s = 0;
	for (int i = 0; i < SoLuongVe; i++)
		s += DanhSachVe[i]->TinhTien();
	return s;
}
int CCongVien::DemVeTungPhan()
{
	int s = 0;
	for (int i = 0; i < SoLuongVe; i++)
		s += DanhSachVe[i]->DemVeTungPhan();
	return s;
}