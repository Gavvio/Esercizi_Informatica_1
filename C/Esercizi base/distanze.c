#include <math.h>
double square_dist(double x1, double y1, double x2, double y2) {
	double x = x1 - x2;
	double y = y1 - y2;
	return pow(x, 2) + pow(y, 2);
}