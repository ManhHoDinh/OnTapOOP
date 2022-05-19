#include "CVe.h"
void CVe::Nhap()
{
	cin.ignore();
	cout << "Nhap ma ve : ";
	getline(cin, MaSoVe);
	cout << "Nhap ho ten chu ve : ";
	getline(cin, HoTen);
	cout << "Nam sinh : ";
	cin >> NamSinh;
	cout << "So tro choi : ";
	cin >> SoTroChoi;
}
void CVe::Xuat()
{
	cout << "\nMa ve : " << MaSoVe;
	cout << "\nHo ten chu ve : " << HoTen;
	cout << "\nNam sinh chu ve : " << NamSinh;
	cout << "\nVe tung phan";
	cout << "\nSo tro choi : " << SoTroChoi;
}

long CVe::TinhTien()
{
	return 0;
}
int CVe::DemVeTungPhan()
{
	return 0;
}