#include "Header.h"

// NỘI DUNG THỰC HÀNH 
void nhapDS(DaySo& a) {
	do {
		cout << "\nNhap so phan tu: ";
		cin >> a.n;
	} while (a.n <= 0);
	
	for (int i = 0; i < a.n; i++) {
		cout << "a[" << i << "]= ";
		cin >> a.list[i];
	}
}

void xuatDS(DaySo a) {
	cout << "\nDay so: ";
	for (int i = 0; i < a.n; i++) {
		cout << a.list[i] << " ";
	}
}

int tinhTongDS(DaySo a) {
	int sum = 0;
	for (int i = 0; i < a.n; i++) {
		sum += a.list[i];
	}
	return sum;
}

int tinhTichDS(DaySo a) {
	int tich = 1;
	for (int i = 0; i < a.n; i++) {
		tich *= a.list[i];
	}
	return tich;
}

int demPTDuong(DaySo a) {
	int count = 0;
	for (int i = 0; i < a.n; i++) {
		if (a.list[i] > 0)
			count++;
	}
	return count;
}

int tinhTongChan(DaySo a) {
	int sum = 0;
	for (int i = 0; i < a.n; i++) {
		if (a.list[i] % 2 == 0)
			sum += a.list[i];
	}
	return sum;
}

int tinhTichPTChiSoChan(DaySo a) {
	int tich = 1;
	for (int i = 0; i < a.n; i+=2) {
		tich *= a.list[i];
	}
	return tich;
}

int demPTChiaHetCho3Va5(DaySo a) {
	int count = 0;
	for (int i = 0; i < a.n; i++) {
		if (a.list[i] % 3 == 0 && a.list[i] % 5 == 0)
			count++;
	}
	return count;
}

// BÀI TẬP TỔNG HỢP 
//1
bool isPrime(int n) {
	for (int i = 2; i < sqrt(n); i++) {
		if (i % 2 == 0)
			return false;
	}
	return n > 1;
}

int tongPTLaSNT(DaySo a) {
	int sum = 0;
	for (int i = 0; i < a.n; i++) {
		if (isPrime(a.list[i]))
			sum += a.list[i];
	}
	return sum;
}

void xuatPTAmDuongVa0(DaySo a) {
	int soAm = 0, soDuong = 0, so0 = 0;
	
	for (int i = 0; i < a.n; i++) {
		if (a.list[i] < 0) soAm++;
		else if (a.list[i] == 0) so0++;
		else soDuong++;
	}

	cout << "\nSo luong PT am: " << soAm;
	cout << "\nSo luong PT duong: " << soDuong;
	cout << "\nSo luong PT 0: " << so0;
}

// BÀI TÂP LÀM THÊM 