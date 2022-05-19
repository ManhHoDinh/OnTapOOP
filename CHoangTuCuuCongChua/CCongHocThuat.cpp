#include "CCongHocThuat.h"

void CCongHocThuat::Nhap()
{
	cout << "Nhap tri tue cua hien triet : ";
	cin >> TriTueCauHoi;
}

int CCongHocThuat::ktQuaCong(CHoangTu&x)
{
	if (x.GetTriTue() > TriTueCauHoi)
		return 1;
	return 0;
}