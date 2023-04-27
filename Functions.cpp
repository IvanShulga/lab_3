#include "Functions.h"

Triangle::Triangle () {

	for (int i = 0; i < 2; i++) {

		this->a[i] = (float) i + 1.23;
		this->b[i] = (float) i + 8.52;
		this->c[i] = (float) i + 3.14;

	}

}

Triangle::Triangle(Triangle & t) {

	this->a[x] = t.a[x];
	this->a[y] = t.a[y];
	this->b[x] = t.b[x];
	this->b[y] = t.b[y];
	this->c[x] = t.c[x];
	this->c[y] = t.c[y];

}

Triangle::Triangle (float ax, float ay, float bx, float by, float cx, float cy) {

	this->a[x] = ax;
	this->a[y] = ay;
	this->b[x] = bx;
	this->b[y] = by;
	this->c[x] = cx;
	this->c[y] = cy;

}


float Triangle::perymetr() {

	float perim = (sqrt(pow(this->b[x] - this->a[x], 2) + pow(this->b[y] - this->a[y], 2)) + sqrt(pow(this->c[x] - this->a[x], 2) + pow(this->b[y] - this->c[y], 2)) + sqrt(pow(this->b[x] - this->c[x], 2) + pow(this->b[y] - this->c[y], 2)));

	return perim;

}

void Triangle::operator += (float dod) {

	this->a[x] += dod;
	this->a[y] += dod;
	this->b[x] += dod;
	this->b[y] += dod;
	this->c[x] += dod;
	this->c[y] += dod;

}

Triangle & Triangle::operator ++ () {

	this->a[x] ++;
	this->b[x] ++;
	this->c[x] ++;

	return *this;

}

Triangle& Triangle::operator ++ (int dod) {

	Triangle temp(*this);

	this->a[y] ++;
	this->b[y] ++;
	this->c[y] ++;

	return temp;

}

void Triangle::show() {

	cout << "Triangle parameters:\nFirst dot: x = " << this->a[x] << " y = " << this->a[y] << "\nSecond dot: x = " << this->b[x] << " y = " 
		<< this->b[y] << "\nThird dot: x = " << this->c[x] << " y = " << this->c[y] << endl;

}

float Triangle::getAx() { return this->a[x]; }
float Triangle::getAy() { return this->a[y]; }
float Triangle::getBx() { return this->b[x]; }
float Triangle::getBy() { return this->b[y]; }
float Triangle::getCx() { return this->c[x]; }
float Triangle::getCy() { return this->c[y]; }

void biggest_per(Triangle& t1, Triangle& t2, Triangle& t3) {

	float per_1 = t1.perymetr(), per_2 = t2.perymetr(), per_3 = t3.perymetr();

	cout << "Perimetr of the first triangle: " << per_1 << " and perimetr of the second triangle: " 
		<< per_2 << " and perimetr of the third triangle: " << per_3 << endl;

	if (per_1 > per_2 && per_1 > per_3)
		cout << "First triangle has the biggest perimetr " << per_1 << endl;
	else if (per_2 > per_1 && per_2 > per_3)
		cout << "Second triangle has the biggest perimetr " << per_2 << endl;
	else
		cout << "Third triangle has the biggest perimetr " << per_3 << endl;

}
