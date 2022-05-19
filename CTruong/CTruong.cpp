#include "CTruong.h"
void CTruong::Nhap()
{
	cout << "Nhap so luong sinh vien : ";
	cin >> SoLuongSinhVien;
	DanhSachSinhVien = new CSinhVien * [SoLuongSinhVien];
	for (int i = 0; i < SoLuongSinhVien; i++)
	{
		cout << "Nhap Thong tin sinh vien thu " << i + 1 << " : ";
		cout << "\n0: Sinh vien cao dang";
		cout << "\n1: Sinh vien dai hoc";
		cout << "\nNhap lua chon : ";
		int chose;
		cin >> chose;
		if (chose == 0)
			DanhSachSinhVien[i] = new CSinhVienCaoDang;
		else
			DanhSachSinhVien[i] = new CSinhVienDaiHoc;
		DanhSachSinhVien[i]->Nhap();
	}
}
void CTruong::Xuat()
{
	cout << "\n=========================================";
	cout << "\nThong tin cua truong : ";
	cout << "\nSo luong sinh vien : " << SoLuongSinhVien;
	cout << "\nDanh sach sinh vien : ";
	for (int i = 0; i < SoLuongSinhVien; i++)
		DanhSachSinhVien[i]->Xuat();
	cout << "\nSo luong sinh vien tot nghiep : " << DemTotNghiep();
	cout << "\nSinh Vien dai hoc co diem Trung Binh lon nhat : ";
	SinhVienDaiHocDiemTrungBinhCaoNhat()->Xuat();
}
int CTruong::DemTotNghiep()
{
	int s = 0;
	for (int i = 0; i < SoLuongSinhVien; i++)
		s += DanhSachSinhVien[i]->ktTotNghiep();
	return s;
}
CSinhVien* CTruong::SinhVienDaiHocDiemTrungBinhCaoNhat()
{
	CSinhVien* temp = DanhSachSinhVien[0];
	for (int i = 0; i < SoLuongSinhVien; i++)
		if (temp->DiemTrungBinhCuaSinhVienDaiHoc() < DanhSachSinhVien[i]->DiemTrungBinhCuaSinhVienDaiHoc())
			temp = DanhSachSinhVien[i];
	if (temp != NULL)
		return temp;
	return NULL;
}