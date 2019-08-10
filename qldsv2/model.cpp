#include "model.h"
#include<string>
#include "datastructure.h"

using namespace std;

void DSLopTC::ThemLopTC(LopTC * new_lop)
{
	//kiem tra so luong lop da full chua
	if (soluonglop > MAX_SIZE_LOP_TC)
	{
		cout << "So lop tin chi da day, khong the them! ";
		return;
	}

	//gan gia tri vao vi tri so luong lop
	lop[soluonglop] = new_lop;

	//tang so luong lop
	soluonglop++;
}

void DSLopTC::XoaLopTC(int malop)
{
	//tim lop theo malop
	for (int i = 0; i < soluonglop; i++)
	{
		if (malop == lop[i]->maloptc)
		{
			//da tim thay lop can xoa
			LopTC * temp = lop[i];
			delete temp;

			//sap xep lai lop sau khi delete
			for (int j = i; j < soluonglop; j++)
			{
				lop[j] = lop[j + 1];
			}
			soluonglop--;
		}
	}
}

void DSLopTC::InLopTC()
{
	for (int i = 0; i < soluonglop; i++)
	{
		 lop[i]->InLop();
	}
}

LopTC * DSLopTC::TimLop(int malop)
{
	for (int i = 0; i < soluonglop; i++)
	{
		if (malop == lop[i]->maloptc)
		{
			//da tim thay lop
			return lop[i];
		}
	}
	return NULL;
}



DSLopTC::DSLopTC()
{
	soluonglop = 0;
}

void LopTC::InLop()
{

	cout << "\nMa Lop: ";
	cout << maloptc;
	cout << "\nMa Mon Hoc: ";
	cout << mamh;
	cout << "\nNien Khoa: ";
	cout << nienkhoa;
	cout << "\nHoc Ky: ";
	cout << hocky;
	cout << "\nSo SV Max: ";
	cout << sosvMax;
	cout << "\nSo SV Min: ";
	cout << sosvMin;
}

LinkedList<SinhVien> DSSinhVien::GetSinhVien(int nam_hoc)
{
	LinkedList<SinhVien> result = LinkedList<SinhVien>();

	for (LNode<SinhVien> * head = sinhvien->pHead; head->Next != NULL; head = head->Next)
	{

		if (head->data.namhoc == nam_hoc) {}
			//	result.ThemNode((SinhVien*)head->data);
	}
	return result;
}

void DSSinhVien::ThemSinhVien(SinhVien  sv)
{
	sinhvien->ThemNode(sv);
}

DSSinhVien::DSSinhVien()
{
	sinhvien = new LinkedList<SinhVien>();
}
