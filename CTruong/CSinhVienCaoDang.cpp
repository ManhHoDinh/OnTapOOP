#include "CSinhVienCaoDang.h"

void CSinhVienCaoDang::Nhap()
{
	CSinhVien::Nhap();
	cout << "Nhap diem thi tot nghiep : ";
	cin >> DiemThiTotNghiep;
}
void CSinhVienCaoDang::Xuat()
{
	cout << "\nSinh vien cao dang";
	CSinhVien::Xuat();
	cout << "\nDiem thi tot nghiep : " << DiemThiTotNghiep;
}
int CSinhVienCaoDang::ktTotNghiep()
{
	if (TongSoTinChi >= 120 && DiemTrungBinh >= 5 && DiemThiTotNghiep >= 5)
		return 1;
	return 0;
}

