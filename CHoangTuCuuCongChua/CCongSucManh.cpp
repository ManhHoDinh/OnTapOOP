#include "CCongSucManh.h"

void CCongSucManh::Nhap()
{
	cout << "Nhap suc manh cua dau si : ";
	cin >> SucManh;
}

int CCongSucManh::ktQuaCong(CHoangTu&x)
{
	if (x.GetSucManh() >= SucManh)
	{
		x.SetSucManh(x.GetSucManh() - SucManh);
		return 1;
	}
	return 0;
}