#include "View.h"
#include <iostream>
#include<string>
#include "Control.h"

using namespace std;

LopTC * View::TaoLop()
{
	LopTC * lop_tc = new LopTC();

	cout << "\nMa Lop: ";
	cin >> lop_tc->maloptc;
	cout << "\nMa Mon Hoc: ";
	getline(cin, lop_tc->mamh) ;
	cout << "\nNien Khoa: ";
	cin >> lop_tc->nienkhoa;
	cout << "\nHoc Ky: ";
	cin >> lop_tc->hocky;
	cout << "\nSo SV Max: ";
	cin >> lop_tc->sosvMax;
	cout << "\nSo SV Min: ";
	cin >> lop_tc->sosvMin;

	return lop_tc;
}

LopTC * View::XoaLop()
{
	DSLopTC &dsloptc;
	int malop = 0;
	cout << "\nNhap vao ma lop can xoa: ";
	cin >> malop;
	LopTC *del;

	for (int i = 0; i < dsloptc.soluonglop; i++)
	{
		if (dsloptc.lop[i]->maloptc == malop)
		{
			del = dsloptc.lop[i];
			for (int j = i + 1; j < dsloptc.soluonglop; j++)
			{
				*dsloptc.lop[j] = *dsloptc.lop[j - 1];
			}
			//cout << "\nLop da xoa thanh cong";
			delete del;
			dsloptc.soluonglop--;
			system("pause");
		}
	}
}

void View::CauA()
{
	int lua_chon = 0;
	cout << "1: Them lop tin chi";
	cin >> lua_chon;
	while (1) {
		system("cls");
		cout << "\n=========== QUAN LI LOP HOC =============" << endl;
		cout << "1. Them Lop tin chi" << endl;
		cout << "2. Xoa Lop tin chi" << endl;
		cout << "3. Chinh sua lop tin chi" << endl;
		cout << "4. In danh sach lop theo nam " << endl;
		cout << "5. In danh sach tat ca lop tin chi" << endl;
		cout << "0. Menu Chinh" << endl;

		cout << "\nNhap lua chon: ";
		cin >> lua_chon;
		switch (lua_chon) {
		case 1:control->ThemLopTC();
			break;
		case 2: 
			
			break;
		case 3: 
			
			break;
		case 0: 
		}
	}

	if (lua_chon == 1)
	{
		control->ThemLopTC();
	}

}
