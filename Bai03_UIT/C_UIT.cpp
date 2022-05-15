#include "C_UIT.h"
#


void C_UIT::Nhap()
{
	cout << "Nhap so luong sinh vien : ";
	cin >> SoLuongSinhVien;
	DanhSachSinhVien = new CSinhVien * [SoLuongSinhVien];
	for (int i = 0; i < SoLuongSinhVien; i++)
	{
		cout << "Nhap thong tin sinh vien thu " << i << " : ";
		int choose;
		cout << "\nNhap lua chon : ( 0: Sinh Vien Cao Dang, other: Sinh Vien Dai Hoc) : ";
		cin >> choose;
		if (choose == 0)
			DanhSachSinhVien[i] = new CSinhVienCaoDang;
		else
			DanhSachSinhVien[i] = new CSinhVienDaiHoc;
		DanhSachSinhVien[i]->Nhap();
	}
}
void C_UIT::Xuat()
{
	cout << "\nSo luong sinh vien : \n" << SoLuongSinhVien;
	cout << "\nDanh sach sinh vien : \n";
	for (int i = 0; i < SoLuongSinhVien; i++)
		DanhSachSinhVien[i]->Xuat();
	cout << "\nSo sinh vien tot nghiep : " << DemTotNghiep();
	cout << "\nSinh vien Diem Trung Binh Cao Nhat : ";
	CSinhVien* p = SinhVienDTBCaoNhat();
	p->Xuat();
}
int C_UIT::DemTotNghiep()
{
	int s = 0; 
	for (int i = 0; i < SoLuongSinhVien; i++)
		s += DanhSachSinhVien[i]->DemTotNghiep();
	return s;
}
CSinhVien* C_UIT::SinhVienDTBCaoNhat()
{
	CSinhVien* temp = DanhSachSinhVien[0];
	for (int i = 0; i < SoLuongSinhVien; i++)
		if (temp->getDTB() < DanhSachSinhVien[i]->getDTB())
			temp = DanhSachSinhVien[i];
	return temp;
}