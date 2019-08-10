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

	void InLop();
};

#define MAX_SIZE_LOP_TC 5000

struct DSLopTC
{
	LopTC *lop[MAX_SIZE_LOP_TC];
	int soluonglop;

	//cau a
	void ThemLopTC(LopTC * new_lop);
	void XoaLopTC(int malop);
	void InLopTC();
	LopTC *TimLop(int malop);

	DSLopTC();
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
	LinkedList<SinhVien> * sinhvien;

	//cau b
	
	LinkedList<SinhVien> GetSinhVien(int nien_khoa);

	//cau c
	void ThemSinhVien(SinhVien sv);
	void XoaSinhVien(int masv);
	void SuaSinhVien(int masv);

	DSSinhVien();
};

struct  ModelManager
{
	DSSinhVien * dssv = new DSSinhVien();
	DSLopTC * dsloptc = new DSLopTC();

};