#include "geometria.h"
int colineari(struct punto p1, struct punto p2, struct punto p3) {
	double a = (p3.x - p2.x) * (p1.y - p2.y);
	double b = (p3.y - p2.y) * (p1.x - p2.x);
	if (a == b) {
		return 1;
	}
	else {
		return 0;
	}
}