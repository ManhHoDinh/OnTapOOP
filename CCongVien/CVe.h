#pragma once
#include<iostream>
#include<string>
using namespace std;
class CVe
{
protected:
	string MaSoVe;
	string HoTen;
	int NamSinh;
	int SoTroChoi;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual long TinhTien();
	virtual int DemVeTungPhan();
};

