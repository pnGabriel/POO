#include "cerc.h"
#include "dreptunghiRotit.h"
#include "oval.h"
#include "forme.h"

int main() {
	Forme f;
	Cerc c;
	c.set(10, 10, 100);
	Oval o;
	o.set(20, 20, 50, 100);
	DreptunghiRotit p;
	p.set(5, 5, 2, 10, 30);
	f.Add(&c);
	f.Add(&o);
	f.Add(&p);
	f.Paint();
	system("Pause");
	return 0;
}