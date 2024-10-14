#include "Header.h"

int main() {
	// NỘI DUNG THỰC HÀNH 
	DaySo a;
	nhapDS(a);
	xuatDS(a);
	cout << "\nTong DS: " << tinhTongDS(a);
	cout << "\nTich DS: " << tinhTichDS(a);
	cout << "\nSo luong PT duong: " << demPTDuong(a);
	cout << "\nTong cac so chan: " << tinhTongChan(a);
	cout << "\nTich PT co chi so chan: " << tinhTichPTChiSoChan(a);
	cout << "\nSo luong PT chia het cho 3 va 5: " << demPTChiaHetCho3Va5(a);

	// BÀI TẬP TỔNG HỢP 
	cout << "\nTong PT la SNT: " << tongPTLaSNT(a);
	xuatPTAmDuongVa0(a);

	// BÀI TÂP LÀM THÊM 
}