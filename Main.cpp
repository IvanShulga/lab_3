#include "Functions.h"

int main() {
	
	Triangle T1, T2 (1, 2, 3, 4, 5, 6), T3 (T2);

	T1.show();
	T2.show();
	T3.show();

	++T1;
	T2++;
	T3 += 1;

	T1.show();
	T2.show();
	T3.show();

	biggest_per(T1, T2, T3);

	return 0;

}
