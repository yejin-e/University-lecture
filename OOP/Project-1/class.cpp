#include<iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {};
	int GetX() { return x; }
	int GetY() { return y; }
};

class CShape {
private:
	Point p1, p2;
public:
	CShape(int x1, int x2, int x3, int x4) : p1(x1, x2), p2(x3, x4) {};
	virtual void Draw() {
		cout << p1.GetX() << " " << p1.GetY() << " " << p2.GetX() << " " << p2.GetY() << endl;
	}
};

class CLine :public CShape {
public:
	CLine(int x1, int x2, int x3, int x4) : CShape(x1, x2, x3, x4) {};
	void Draw() {
		cout << "직선을 그린다." << " ";
		CShape::Draw();
	}
};

class CCircle :public CShape {
public:
	CCircle(int x1, int x2, int x3, int x4) : CShape(x1, x2, x3, x4) {};
	void Draw() {
		cout << "원을 그린다." << " ";
		CShape::Draw();
	}
};
