#include "CVeTungPhan.h"



void CVeTungPhan::Xuat()
{
	cout << "\nVe tung phan ";
	CVe::Xuat();
}
long CVeTungPhan::TinhTien()
{
	return 70000 + 20000 * SoTroChoi;
}
int CVeTungPhan::DemVeTungPhan()
{
	return 1;
}