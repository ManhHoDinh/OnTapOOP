#include "CHoangTu.h"
#include<iostream>
using namespace std;

void CHoangTu::Nhap()
{
	cout << "\nNhap tri tue : ";
	cin >> TriTue;
	
	cout << "Nhap tai san : ";
	cin >> TaiSan;
	
	cout << "Nhap suc manh : ";
	cin >> SucManh;
}

void CHoangTu::Xuat()
{
	cout << "\nTri tue : " << TriTue;
	cout << "\nTai San : " << TaiSan;
	cout << "\nSuc manh : " << SucManh;
}

float CHoangTu::GetTaiSan()
{
	return TaiSan;
}

float CHoangTu::GetTriTue()
{
	return TriTue;
}

float CHoangTu::GetSucManh()
{
	return SucManh;
}

void CHoangTu::SetTaiSan(float taisan)
{
	TaiSan = taisan;
}

void CHoangTu::SetTriTue(float tritue)
{
	TriTue = tritue;
}

void CHoangTu::SetSucManh(float sucmanh)
{
	SucManh = sucmanh;
}