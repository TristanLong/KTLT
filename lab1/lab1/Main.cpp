#include "Header.h"

int main() {
	// NỘI DUNG THỰC HÀNH
	int a, b;
	double x;
	cout << "Giai phuong trinh bac 1 (ax+b=0):";
	cout << "\nNhap a,b: ";
	cin >> a >> b;

	if (a == 0)
		cout << "\nKhong chia cho 0";
	else {
		giaiPTB1(a, b, x);
		cout << "\nNghiem PT la: " << x << endl;
	}

	int n;
	cout << "\nTinh 2^n:";
	cout << "\nNhap n: ";
	cin >> n;
	cout << "2^(" << n << ") = " << tinh2MuN(n);

	// BÀI TẬP TỔNG HỢP
	int c;
	cout << "\nNhap a,b,c: ";
	cin >> a >> b >> c; // Nhap a=1 b=7 c=10 => x1<0 x2<0
	double x1, x2;
	switch (giaiPTB2(a, b, c, x1, x2)) {
	case 0:
		cout << "\nPhuong trinh vo nghiem";
		break;
	case 1:
		cout << "\nPhuong trinh co 1 nghiem x= " << x1;
		break;
	case 2:
		cout << "\nPhuong trinh co 2 nghiem x1= " << x1 << " x2= " << x2;
		break;
	case 3:
		cout << "\nPhuong trinh co vo so nghiem";
		break;
	}

	if (giaiPTB2(a, b, c, x1, x2) == 2) {
		cout << "\nKet qua (" << x1 << ")^(" << x2 << ") la: " << XMuY(x1, x2);
	}

	// BÀI TẬP LÀM THÊM 
	// 1
	do {
		cout << "\nNhap n>0: ";
		cin >> n;
	} while (n <= 0);

	if (checkLuyThuaCoSo2(n))
		cout << n << " la luy thua co so 2";
	else
		cout << n << " KHONG la luy thua co so 2";

	// 2+3
	cout << "\nNhap a,b: ";
	cin >> a >> b;
	cout << "UCLN: " << UCLN(a, b) << endl;
	cout << "BCNN:" << BCNN(a,b) << endl;

	// 4
	cout << "\nNhap n: ";
	cin >> n;
	if (isPrime(n))
		cout << n << " la SNT" << endl;
	else
		cout << n << " KHONG la SNT" << endl;

	// 5
	cout << "\nNhap n: ";
	cin >> n;
	cout << n << " SNT dau tien :";
	xuatSNT(n);

	// 6
	cout << "\nNhap n: ";
	cin >> n;
	cout << "\nCac SNT <= " << n << ": ";
	xuatSNTNhoHonBangN(n);

	// 7
	do {
		cout << "\nNhap n>0: ";
		cin >> n;
	} while (n <= 0);

	if (isSHT(n))
		cout << n << " la so hoan thien" << endl;
	else
		cout << n << " KHONG LA so hoan thien" << endl;

	// 8
	cout << "\nNhap n: ";
	cin >> n;
	cout << "\nTong ky so " << n << " la: " << tongKySo(n);
}