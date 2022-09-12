#include <iostream>
using namespace std;
struct T_T {
	float a, b, c;
};
T_T n;

void Nhap_PT(T_T &n) {
	cout << "\n Nhap Phan Tu A: "; cin >> n.a;
	cout << "\n Nhap Phan Tu B: "; cin >> n.b;
	cout << "\n Nhap Phan Tu C: "; cin >> n.c;
}

//Kiểm tra số thực có cùng dấu hay không 
void Kt_SoThuc() {
	//Cách 1

	/*if ((n.a > 0 && n.b > 0) || (n.a < 0 && n.b < 0)) {
		cout << "\n Hai So " << n.a << " Va " << n.b << " Cung Dau " << endl;
	}
	else if ((n.a > 0 && n.b < 0) || (n.a < 0 && n.b >0)) {
		cout << "\n Hai So " << n.a << " Va " << n.b << " Khac Dau " << endl;
	}
	else {
		cout << "\n bye ";
	}*/

	//cách 2: 
	if (n.a * n.b > 0) {
		cout << "\n Hai So " << n.a << " Va " << n.b << " Cung Dau " << endl;
	}
	//ngược lại thì a và b trái dấu
	else {
		cout << "\n Hai So " << n.a << " Va " << n.b << " Khac Dau " << endl;
	}
}
//Tìm số lớn nhất trong 3 số 
int Tim_Max() {
	float max = n.a;
	// Nếu n.a < n.b thì n.b là số lớn nhất 
	if (max < n.b) {
		max = n.b;
	} 
	//Nếu n.b < n.c thì n.c là số lớn nhất 
	if (max < n.c) {
		max = n.c;
	}
	return max;
}
//Giải PT Bậc nhất có dạng f(x)= ax + b = 0
/* Điều Kiện Giải PTB1 Là:
+ x = -b/a ( nếu a khác 0 )
+ PT Vô Số Nghiệm nếu a=0 và b=0
+ PT Vô nghiệm nếu a=0 và b khác 0
*/
void Giai_Pt() {
	float x;
	if (n.a == 0) {
		if (n.b == 0) {
			cout << "\n PT Vo So Nghiem ";
		}
		else {
			cout << "\n PT Vo Nghiem ";
		}
	}
	else {
		x = -n.b / n.a;
		cout << "\n Nghiem Cua PT la: " << x << endl;
	}
}
//Giải Pt Bậc 2 
/*
Nếu a != 0 thì tính delta = b² – 4ac
Nếu delta < 0 thì phương trình vô nghiệm
Nếu delta = 0 thì phương trình có nghiệm kép: x1 = x2 = -b/2a
Nếu delta > 0 thì sẽ có 2 nghiệm phân biệt: x1 = (-b + delta)/2a, x2 = (-b -delta)/2a;
Nếu a == 0 thì phương trình trở thành phương trình bậc 1, chúng ta sẽ giải phương trình bậc một đã đề cập ở bài tập trước.
*/
void Giai_PTB2() {
	float x;
	if (n.a != 0) {
		x =( (n.b * n.b) - (4 * n.a * n.c));
		if (x < 0) {
			cout << "\n PT Vo Nghiem ";
		}
		else if (x == 0) {
			cout << "\n Phuong Trinh Co Nghiem Kep " << -n.b / 2 * n.a;
		}
		else {
			cout << "\n Phuong Trinh Co 2 Nghiem Phan Biet ";
			cout << "\n Nghiem x1: " << (-n.b + sqrt(x)) / 2 * n.a;
			cout << "\n Nghiem x1: " << (-n.b - sqrt(x)) / 2 * n.a;
		}
	}
	else {
		if (n.b == 0) {
			if (n.c == 0) {
				cout << "\n Phuong Trinh Vo So Nghiem " << endl;
			}
			else {
				cout << "\n Phuong Trinh Vo Nghiem " << endl;
			}
		}
		else {
			cout << "\n Phuong Trinh Co 1 Nghiem Duy Nhat " << -n.c / n.b << endl;
		}
	}
}
// Kiểm tra một tháng trong nam89 có bao nhiêu quý 
/*
Nếu người dùng nhập vào 1, 2, 3 thì thông báo thuộc quý 1.
Nếu người dùng nhập vào 4, 5, 6 thì thông báo thuộc quý 2.
Nếu người dùng nhập vào 7, 8, 9 thì thông báo thuộc quý 3.
Nếu người dùng nhập vào 10, 11, 12 thì thông báo thuộc quý 4.
Nếu người dùng nhập vào <= 0 và > 12 thì thông báo đã nhập sai
*/

void Kt_Thang() {
	int chon;
	cout << "\n Nhap Thang: "; cin >> chon;
	do{
		if (chon <= 0 || chon > 12) {
			cout << "\n Nhap Sai. Vui Long Nhap Lai ";
		}
	} while (chon <= 0 || chon > 12);
	switch (chon) {
	case 1:
	case 2:
	case 3:
	{
		cout << "\n Thang Nay Thuoc Quy 1";
		break;
	}
	case 4:
	case 5:
	case 6:
	{
		cout << "\n Thang Nay Thuoc Quy 2";
		break;
	}
	case 7:
	case 8:
	case 9:
	{
		cout << "\n Thang Nay Thuoc Quy 3";
		break;
	}
	case 10: 
	case 11:
	case 12:
	{
		cout << "\n Thang Nay Thuoc Quy 4 ";
		break;
	}
	default: 
		cout << "\n Vui Long Nhap Thang Tu 1 Den 12 "; 
		break;
	}
}

//In ra bảng chữ cái A,B,C và a,b,c 
void Bang_Chu_Cai() {
	char  i='A';
	cout << "\n Dem Bang Chu Cai ";
	for (i = 'A'; i <= 'Z'; i++) {
		cout << " " <<i;
	}
	char  j = 'a';
	cout << "\n Dem Bang Chu Cai ";
	for (j = 'a'; j <= 'z'; j++) {
		cout << " " << j;
	}
}
int main() {
	Nhap_PT(n);
	Kt_SoThuc();
	cout << "\n So Lon Nhat Trong Ba So La " << Tim_Max()<<endl;
	Giai_Pt();
	Giai_PTB2();
	Kt_Thang();
	Bang_Chu_Cai();
	return 0;
}