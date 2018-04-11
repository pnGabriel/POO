#include <iostream>
using namespace std;
class A {
public:
	A() { cout << "A() "; }
};

class B {
public:
	B() { cout << "B() "; }
};

class C : public A, public B {
public:
	C() { cout << "C() "; }
};

class E {
public:
	E() { cout << "E() "; }
	//	E(A una, B unb, C unc) :
	//	b(unb), a(una), c(unc) {}
private:
	C c; B b; A a;
};


class Base {
protected:
	int x;
	int z;
public:
	Base() { cout << "constBase\n"; x = 1; }
	//Base(int a) { cout << "constBaseA\n"; x = a; }
	virtual void set() { cout << "setBase\n"; }
};

class Deriv : public Base {
public:
	int y;
	//Base b;
	Deriv() { cout << "constDeriv\n"; y = 2; }
	Deriv(int a) { cout << "constDerivA\n"; y = a; }
	virtual void set(int a) { cout << "setDeriv\n"; y = a; }
	void friend operator <<(int &a, const Deriv& d) {
		a = d.y;
	}
	template<class T>
	Deriv& operator +(T a) {
		y = y + a;
		return (*this);
	}
	int operator ~() {
		return this->y;
	}
	template<class T>
	operator T() {
		return (T)this->y;
	}
};
template<class T2 = Deriv>
void function(T2& a = T2()) {
	int s;
	s << a;
	cout << s << endl;
	cout << ~a << endl;
	cout << char(a + 'A') << endl;
}

int main() {
	Base a;
	Deriv b;
	Base *q;
	q = &b;
	q->set();
	memcpy(&a, &b, sizeof(void*));
	Base *w = &a;
	w->set();
	function(b);
	cout << char(b) << endl;
	cout << sizeof(void*) << endl << sizeof(b) << endl;
	//--------------------------//
	system("Pause");
	return 0;
}