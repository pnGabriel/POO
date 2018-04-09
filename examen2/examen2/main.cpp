#include "lista.h"

int main() {
	ListaCumparaturi L;
	(L += Cumparaturi("paine", 5)) += Cumparaturi("peste", 2);
	L.Print();
	L -= "peste";
	L.Print();
	ListaCumparaturi L2;
	(L2 += Cumparaturi("lapte", 4)) += Cumparaturi("paine", -2);
	(L | L2).Print();
	system("Pause");
	return 0;
}