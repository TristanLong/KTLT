#include "Header.h"

// NỘI DUNG THỰC HÀNH
void giaiPTB1(int a, int b, double& x) {
	x = -b / a;
}

double tinh2MuN(int n) {
	double s = 1;
	/*for (int i = 1; i <= n; i++) {
		s *= 2;
	}*/

	int i = 1;
	while (i <= abs(n)) {
		s *= 2;
		i++;
	}

	return (n < 0) ? 1 / s : s;
}

// BÀI TẬP TỔNG HỢP
int giaiPTB2(int a, int b, int c, double& x1, double& x2) {
	if (a == 0 && b == 0 && c == 0) return 3;

	if (a == 0) {
		x1 = x2 = -c / b;
		return 1;
	}

	double delta = (b * b) - (4 * a * c);
	if (delta > 0) {
		x1 = (double)(-b + sqrt(delta)) / (2 * a);
		x2 = (double)(-b - sqrt(delta)) / (2 * a);
		return 2;
	}
	else if (delta == 0) {
		x1 = x2 = -b / (2 * a);
		return 1;
	}
	else return 0;
}

double XMuY(double x, double y) {
	double result = 1;
	for (int i = 1; i <= abs(y); i++) {
		result *= x;
	}
	return (y < 0) ? 1 / result : result;
}

// BÀI TẬP LÀM THÊM 
// 1
bool checkLuyThuaCoSo2(int n) {
	int count = 1;
	int tmp = n;
	while (tmp % 2 == 0) {
		tmp /= 2;
		count *= 2;
	}
	return count == n;
}

// 2
int UCLN(int a, int b) {
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

// 3
int BCNN(int a, int b) {
	return (a * b) / UCLN(a, b);
}

// 4
bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return n > 1;
}

// 5
void xuatSNT(int n) {
	int i = 2;
	while (n) {
		if (isPrime(i)) {
			cout << i << " ";
			n--;
		}
		i++;
	}
}

// 6 
void xuatSNTNhoHonBangN(int n) {
	for (int i = 2; i <= n; i++) {
		if (isPrime(i))
			cout << i << " ";
	}
}

// 7
bool isSHT(int n) {
	int sum = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0)
			sum += i;
	}
	return sum == n;
}

// 8
int tongKySo(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}