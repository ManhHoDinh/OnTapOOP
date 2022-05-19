#include "CSinhVien.h"

void CSinhVien::Nhap()
{
	cin.ignore();
	cout << "Nhap ma so sinh vien : ";
	getline(cin, MaSo);
	cout << "Nhap ten sinh vien : ";
	getline(cin, HoTen);
	cout << "Nhap dia chi : ";
	getline(cin, DiaChi);
	cout << "Nhap so tin chi : ";
	cin >> TongSoTinChi;
	cout << "Nhap diem trung binh : ";
	cin >> DiemTrungBinh;
	return;
}
void CSinhVien::Xuat()
{
	cout << "\nMa So sinh vien : " << MaSo;
	cout << "\nHo va ten : " << HoTen;
	cout << "\nDia chi : " << DiaChi;
	cout << "\nSo Tin Chi : " << TongSoTinChi;
	cout << "\nDiem Trung Binh : " << DiemTrungBinh;
	return;
}
int CSinhVien::ktTotNghiep()
{
	return 0;
}
float CSinhVien::DiemTrungBinhCuaSinhVienDaiHoc()
{
	return 0;
}
