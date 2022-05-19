#include "CSinhVienDaiHoc.h"


void CSinhVienDaiHoc::Nhap()
{
	CSinhVien::Nhap();
	cin.ignore();
	cout << "Nhap ten luan van tot nghiep : ";
	getline(cin, TenLuanVan);
	cout << "Nhap Diem Luan Van : ";
	cin>> DiemLuanVan;
}
void CSinhVienDaiHoc::Xuat()
{
	cout << "\nSinh vien dai hoc";
	CSinhVien::Xuat();
	cout << "\nTen luan van : " << TenLuanVan;
	cout << "\nDiem Luan Van : " << DiemLuanVan;
}
int CSinhVienDaiHoc::ktTotNghiep()
{
	if (TongSoTinChi >= 170 && DiemTrungBinh >= 5 && DiemLuanVan >= 5)
		return 1;
	return 0;
}
float CSinhVienDaiHoc::DiemTrungBinhCuaSinhVienDaiHoc()
{
	return DiemTrungBinh;
}
