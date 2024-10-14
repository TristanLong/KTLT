#include "iostream"
using namespace std;

// NỘI DUNG THỰC HÀNH 
const int MAX = 50;
struct DaySo {
	int list[MAX];
	int n;
};

void nhapDS(DaySo& a);
void xuatDS(DaySo a);
int tinhTongDS(DaySo a);
int tinhTichDS(DaySo a);
int demPTDuong(DaySo a);
int tinhTongChan(DaySo a);
int tinhTichPTChiSoChan(DaySo a);
int demPTChiaHetCho3Va5(DaySo a);

// BÀI TẬP TỔNG HỢP 
bool isPrime(int n);
int tongPTLaSNT(DaySo a);
void xuatPTAmDuongVa0(DaySo a);

// BÀI TÂP LÀM THÊM 