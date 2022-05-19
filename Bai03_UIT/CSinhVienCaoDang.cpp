#include "CSinhVienCaoDang.h"

void CSinhVienCaoDang::Nhap()
{
	cin.ignore();
	cout << "Nhap ma so sinh vien ";
	getline(cin, MaSoSinhVien);
	cout << "Nhap ho va ten : ";
	getline(cin, HoTen);
	cout << "Nhap dia chi : ";
	getline(cin, DiaChi);
	cout << "Nhap so tin chi : ";
	cin >> SoTinChi;
	cout << "Nhap diem trung binh : ";
	cin >> DiemTrungBinh;
	cout << "Nhap diem thi tot nghiep : ";
	cin >> DiemThiTotNghiep;
}
void CSinhVienCaoDang::Xuat()
{
	cout << "\nThong tin cua sinh vien co ma so sinh vien " << MaSoSinhVien << " : ";
	cout << "\nHo va ten  : " << HoTen;
	cout << "\nDia chi : " << DiaChi;
	cout << "\nSo Tin chi : " << SoTinChi;
	cout << "\nDiem Trung Binh : " << DiemTrungBinh;
	cout << "\nDiem Thi Tot Nghiep : " << DiemThiTotNghiep<<"\n";
}
int CSinhVienCaoDang::DemTotNghiep()
{
	if (DiemTrungBinh >= 5 && DiemThiTotNghiep >= 5 && SoTinChi >= 120)
		return 1;
	return 0;
}
