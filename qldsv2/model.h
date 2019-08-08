#pragma once
#include<iostream>
#include "datastructure.h"
#include<string.h>
using namespace std;

struct MonHoc
{
	string mamh;
	string tenmh;
	int stclt;
	int stcth;
};

struct DSMonHoc
{
	//Tree<MonHoc> monhoc;
};

struct SVDangKy 
{
	string masv;
	float diem;
};

struct DSDangKy 
{
	//LinkedList<SVDangKy> svdk;
};

struct LopTC 
{
	int maloptc;
	string mamh;
	int nienkhoa;
	int hocky;
	int nhom;
	int sosvMax;
	int sosvMin;
	DSDangKy dssvdk;//tro den phan tu dau cua danh sach dang ky
};
struct DSLopTC
{
	LopTC *lop[5000];
	int soluonglop;

	//cau a
	void ThemLopTC(LopTC * lop);
	void XoaLopTC(int malop);
	void SuaLopTC();
};

struct SinhVien
{
	string masv;
	string ho;
	string ten;
	string phai;
	string sdt;
	string malop;
	int namhoc;


};

struct DSSinhVien
{
	//LinkedList<SinhVien> sinhvien;
	//cau b
	void InDSSVNienKhoa(int nienkhoa);
	void InDSSVHocKy(int hocky);
	void InDSSVNhom(int nhom);
	void InDSSVMaMH(int mamh);

	//cau c
	void ThemSinhVien(SinhVien *sv);
	void XoaSinhVien(int masv);
	void SuaSinhVien(int masv);

	//cau d
	void InDSSinhVien(int malop);
};

