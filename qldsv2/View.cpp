#include "View.h"
#include <iostream>
#include<string>
#include "Control.h"

using namespace std;

void View::MainMenu()
{
	int luachon;
	system("cls");
	cout << "\n================= MENU ===================" << endl;
	cout << "    1.Quan Ly Danh Sach Lop Tin Chi" << endl;
	cout << "    2.Quan Ly Danh Sach Sinh Vien" << endl;
	cout << "    3.Quan Ly Danh Sach Mon Hoc" << endl;
	cout << "    4.Quan Ly Danh Sach Dang Ky" << endl;
	cout << "    0.Thoat" << endl;
	while (1) {
		cout << "\nNhap lua chon: "; 
		cin >> luachon;

		switch (luachon) {
		case 1: MenuLop();
		case 2: MenuSinhVien();
		case 3: MenuMonHoc();
		case 4: MenuDSDK();
		case 0: exit(0);
		default:
			cout << "Lua chon khong phu hop!" << endl;
		}
	}
}


LopTC * View::TaoLop()
{
	LopTC * lop_tc = new LopTC();

	cout << "\nMa Lop: ";
	cin >> lop_tc->maloptc;
	cout << "\nMa Mon Hoc: ";
	cin.ignore(1000, '\n');
	getline(cin, lop_tc->mamh);
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

void View::MenuLop()
{
	int luachon;
	system("cls");
	cout << "\n============= Quan Ly Danh Sach Lop ==============" << endl;
	cout << "    1. Them Lop Tin Chi" << endl;
	cout << "    2. Xoa Lop Tin Chi" << endl;
	cout << "    3. Chinh Sua Lop Tin Chi" << endl;
	cout << "    4. In danh sach lop tin chi" << endl;
	cout << "    0. Menu Chinh" << endl;
	while (1) {
		cout << "\nNhap lua chon: ";
		cin >> luachon;

		switch (luachon) {
		case 1:
			control->ThemLopTC();
			break;
		case 2:
		{
			int malop = 0;
			cout << "\nMa lop can xoa: ";
			cin >> malop;
			control->XoaLopTC(malop);
		}
		break;
		case 3:
		{
			int malop = 0;
			cout << "\nMa lop can sua: ";
			cin >> malop;
			control->SuaLopTC(malop);
		}
			break;
		case 4:
			control->InDSLopTC();
			break;
		case 0: MainMenu();
		default:
			cout << "Lua chon khong phu hop!" << endl;
		}
	}
}

void View::MenuSinhVien()
{
	int luachon;
	system("cls");
	cout << "\n============= Quan Ly Danh Sach Sinh Vien ==============" << endl;
	cout << "    1. Them Sinh Vien" << endl;
	cout << "    2. Xoa Sinh Vien" << endl;
	cout << "    3. Chinh Sua Sinh Vien" << endl;
	cout << "    4. In ds sinh vien theo nien khoa" << endl;
	cout << "    5. In ds sinh vien theo hoc ky" << endl;
	cout << "    6. In ds sinh vien theo nhom" << endl;
	cout << "    7. In ds sinh vien theo ma mon hoc" << endl;
	cout << "    8. In ds sinh vien cua mot lop" << endl;
	cout << "    0. Menu Chinh" << endl;
	while (1) {
		cout << "Nhap lua chon: ";
		cin >> luachon;


		switch (luachon) {
		case 1:
			control->ThemSinhVien();
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:
		{
			int nam_hoc = 0;
			cout << "\nNhap nam hoc: ";
			cin >> nam_hoc;
			control->InDSSV(nam_hoc);
		}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 0: MainMenu();
		default:
			cout << "Lua chon khong phu hop!" << endl;
		}
	}
}

void View::MenuMonHoc()
{
	int luachon;
	system("cls");
	cout << "\n============= Quan Ly Danh Sach Mon Hoc ==============" << endl;
	cout << "    1. Them Mon Hoc" << endl;
	cout << "    2. Xoa Mon Hoc" << endl;
	cout << "    3. Chinh Sua Mon Hoc" << endl;
	cout << "    4. In danh sach mon hoc" << endl;
	cout << "    0. Menu Chinh" << endl;

	while (1) {
		cout << "Nhap lua chon: ";
		cin >> luachon;

		switch (luachon) {
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:
			break;
		case 0: MainMenu();
		default:
			cout << "Lua chon khong phu hop!" << endl;
		}
	}
}

void View::MenuDSDK()
{
	int luachon;
	system("cls");
	cout << "\n============= Quan Ly Danh Sach Dang Ky ==============" << endl;
	cout << "    1. Dang ky lop tin chi" << endl;
	cout << "    2. Nhap diem" << endl;
	cout << "    3. In bang diem mon hoc" << endl;
	cout << "    4. In diem trung binh" << endl;
	cout << "    5. In diem tong ket" << endl;
	cout << "    0. Menu Chinh" << endl;

	while (1) {
		cout << "Nhap lua chon: ";
		cin >> luachon;

		switch (luachon) {
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 0: MainMenu();
		default:
			cout << "Lua chon khong phu hop!" << endl;
		}
	}
}

SinhVien  View::TaoSinhVien()
{
	SinhVien sinhvien = SinhVien();

	cout << "\nNhap ma sinh vien: ";
	cin.ignore(1000, '\n');
	getline(cin, sinhvien.masv);
	cout << "\nNhap ho sinh vien: ";
	cin.ignore(1000, '\n');
	getline(cin, sinhvien.ho);
	cout << "\nNhap ten sinh vien: ";
	cin.ignore(1000, '\n');
	getline(cin, sinhvien.ten);
	cout << "\nNhap phai: ";
	cin.ignore(1000, '\n');
	getline(cin, sinhvien.phai);
	cout << "\nNhap sdt: ";
	cin.ignore(1000, '\n');
	getline(cin, sinhvien.sdt);
	cout << "\nNhap ma lop: ";
	cin.ignore(1000, '\n');
	getline(cin, sinhvien.malop);
	cout << "\nNhap nam hoc: ";
	cin >> sinhvien.namhoc;

	return sinhvien;
}

void View::InSinhVien(SinhVien  sv)
{
	cout << "\nMa sinh vien: ";
	cout << sv.masv;
	cout << "\nHo sinh vien: ";
	cout << sv.ho;
	cout << "\nTen sinh vien: ";
	cout << sv.ten;
	cout << "\nPhai: ";
	cout << sv.phai;
	cout << "\nSdt: ";
	cout << sv.sdt;
	cout << "\nMa lop: ";
	cout << sv.malop;
	cout << "\nNam hoc: ";
	cout << sv.namhoc;

}
