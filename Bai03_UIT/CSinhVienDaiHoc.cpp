#include "CSinhVienDaiHoc.h"

void CSinhVienDaiHoc::Nhap()
{
	cin.ignore();
	cout << "\nNhap ma so sinh vien ";
	getline(cin, MaSoSinhVien);
	cout << "Nhap ho va ten : ";
	getline(cin, HoTen);
	cout << "Nhap dia chi : ";
	getline(cin, DiaChi);
	cout << "Nhap so tin chi : ";
	cin >> SoTinChi;
	cout << "Nhap diem trung binh : ";
	cin >> DiemTrungBinh;
	cin.ignore();
	cout << "Nhap ten luan van : ";
	getline(cin, TenLuanVan);
	cout << "Nhap diem luan van : ";
	cin >> DiemLuanVan;
}
void CSinhVienDaiHoc::Xuat()
{
	cout << "\nThong tin cua sinh vien co ma so sinh vien " << MaSoSinhVien << " : ";
	cout << "\nHo va ten  : " << HoTen;
	cout << "\nDia chi : " << DiaChi;
	cout << "\nSo Tin chi : " << SoTinChi;
	cout << "\nDiem Trung Binh : " << DiemTrungBinh;
	cout << "\nTen luan van : " << TenLuanVan;
	cout << "\nDiem luan van : " << DiemLuanVan;
}
int CSinhVienDaiHoc::DemTotNghiep()
{
	if (DiemTrungBinh >= 5 && DiemLuanVan >= 5 && SoTinChi >= 170)
		return 1;
	return 0;
}
