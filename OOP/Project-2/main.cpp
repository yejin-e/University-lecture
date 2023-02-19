#include<iostream>
#include<cmath>
#include<string>
using namespace std;

double dist_2d(double x1, double x2, double y1, double y2);
double quad_eqn(double a, double b, double c);

void p9() {
	double x1, y1, x2, y2;

	cout << "첫번째 점의 좌표를 입력하세요 : ";
	cin >> x1 >> y1;
	cout << "두번째 점의 좌표를 입력하세요 : ";
	cin >> x2 >> y2;

	cout << "\n첫번째 점 좌표 : " << x1 << " " << y1 << "\n";
	cout << "두번째 점 좌표 : " << x2 << " " << y2 << "\n";
	cout << "두 점 사이의 거리 : " << dist_2d(x1, y1, x2, y2) << "\n";
}

void p10() {
	double a, b, c;

	cout << "\n2차 방정식의 계수를 입력하시오 : ";
	cin >> a >> b >> c;

	quad_eqn(a, b, c);
}

double dist_2d(double x1, double y1, double x2, double y2) {
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

double quad_eqn(double a, double b, double c) {
	double temp = (pow(b, 2) - (4 * a * c));
	cout << "\na : " << a << "\nb : " << b << "\nc : " << c << "\n";

	if (temp < 0)	cout << "근이 없다\n";
	else if (temp == 0) {
		cout << "근은" << -b + sqrt(temp) << "입니다\n";
	}
	else {
		cout << "근은 " << -b + sqrt(temp) << "와 " << -b - sqrt(temp) << "입니다.\n";
	}
	return 0;
}

void main() {
	p9();
	p10();
}
