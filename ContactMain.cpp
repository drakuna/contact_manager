#include <iostream>
#include <Windows.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

void Begin();
void Action(int i);
void NhapDanhBa();
void XoaDanhBa();
void star();
int main()
{
	star();
	cout << "* Welcome to Contact Manager Software *" << endl;
	star();
	int ichoice;
Begin:;
	Begin(); //lua chon hanh dong
	cin >> ichoice;
	if (ichoice == 1 || ichoice == 2 || ichoice == 3) Action(ichoice);
	else
	{
		cout << "Nhap sai, vui long nhap lai" << endl;
		goto Begin;
	}
	Sleep(5000);
	return 0;
}

// cac ham chuc nang
//ham lua chon hanh dong
void Begin()
{
	// se co cac hanh dong nhu 1. Them danh ba; 2. Xoa danh ba; ...
	cout << "Hay chon:" << endl << "1.Them danh ba" << endl << "2.Xoa danh ba" << endl << "3.Thoat ung dung" << endl;
}

void Action(int i)
{
	/*2. dung switch de chuyen den ham xu ly hanh dong tuong ung
	check gia tri cua i, neu nam ngoai cac lua chon thi yeu cau nhap lai
	*/
	switch (i)
	{
	case 1: cout << "Ban da chon nhap danh ba" << endl; NhapDanhBa();
		break;
	case 2: cout << "Ban da chon xoa danh ba" << endl; XoaDanhBa();
		break;
	case 3: cout << "Ban da chon thoat chuong trinh" << endl << "tao hay the nay sao may khong dung tao =.=" << endl;
		Sleep(5000);
		exit (0);
	}
}

void NhapDanhBa()
{
	/*1. co can gioi han so ky tu cua ten danh ba khong? neu co gioi han thi can check do dai cua chuoi ky tu nhap vao
	neu qua dai thi yeu cau nhap lai
	2. ten chi bao gom cac chu cai va so, neu co ky tu dac biet thi yeu cau nhap lai
	3. neu ten danh ba da ton tai thi dua ra lua chon, add them thong tin vao danh ba co san, hoac tao 1 danh ba moi
	*/
	cout << "tao nhap danh ba roi" << endl;
}

void XoaDanhBa()
{
	cout << "tao xoa danh ba roi" << endl;
}

void star()
{
	cout << "***************************************" << endl;
}
/*
co store danh ba ra file luu o hdd khong, neu co them cac ham xu ly vao
*/
/*
Danh ba luu theo kieu struct(), voi tam thoi la 2 bien kieu string la Ten, va Mobile, sau nay se phat trien them
*/
/*
cac option khac
*/
