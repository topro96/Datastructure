#include "Control.h"



void Control::ThemLopTC()
{
	LopTC * lop_tc = view->TaoLop();
	model.dsloptc->ThemLopTC(lop_tc);
}

void Control::XoaLopTC(int malop)
{
	model.dsloptc->XoaLopTC(malop);
}
void Control::SuaLopTC(int malop)
{
	LopTC * lop = model.dsloptc->TimLop(malop);
	if (lop == NULL)
	{
		cout << "\nLop can sua khong ton tai!";
		return;
	}

	lop->InLop();
	model.dsloptc->XoaLopTC(malop);

	LopTC * new_lop = view->TaoLop();
	model.dsloptc->ThemLopTC(new_lop);

}


void Control::InDSLopTC()
{
	model.dsloptc->InLopTC();
}

void Control::ThemSinhVien()
{
	SinhVien new_sv = view->TaoSinhVien();

	model.dssv->ThemSinhVien(new_sv);

}

void Control::InDSSV(int nien_khoa)
{
	LinkedList<SinhVien> sv = model.dssv->GetSinhVien(nien_khoa);
	for (LNode<SinhVien> * head = sv.pHead; head != NULL; head = head->Next)
	{
		view->InSinhVien(head->data);
	}
}

void Control::ThemMonHoc()
{
	MonHoc monhoc = view->TaoMonHoc();
	model.ds_monhoc->ThemMonHoc(monhoc);
}

void Control::XoaMonHoc(string mamh)
{
	long key = GetKey(mamh);
	model.ds_monhoc->monhoc->DeleteNode(key);
}

void Control::InDSMH()
{
	LinkedList<MonHoc> dsmh = model.ds_monhoc->monhoc->GetNode();

	for (LNode<MonHoc> * head = dsmh.pHead; head != NULL; head = head->Next)
	{
		view->InMonHoc(head->data);
	}

}

Control::Control()
{

} 


Control::~Control()
{

}
