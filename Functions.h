#include <iostream>

using namespace std;

#define x 0
#define y 1

class Triangle {

private:
	float a[2];
	float b[2];
	float c[2];

public:

	Triangle();
	Triangle(float ax, float ay, float bx, float by, float cx, float cy);
	Triangle(Triangle& t);

	float perymetr();
	void show();

	Triangle& operator ++ ();
	Triangle& operator ++ (int dod);
	void operator += (float dod);

	float getAx();
	float getAy();
	float getBx();
	float getBy();
	float getCx();
	float getCy();

};

void biggest_per(Triangle& t1, Triangle& t2, Triangle& t3);
