#include <stdio.h>
#include <math.h>

double calc_a(int x[], int y[], int n) {
	int xy = 0, i;
	int s_x = 0, s_y = 0, x2 = 0;
	for(i = 0; i < n; i++) {
		xy += x[i] * y[i];
		s_x += x[i];
		s_y += y[i];
		x2 += pow(x[i], 2);
	}
	return (((n * xy) - (s_x * s_y)) / (double)((n * x2) - pow(s_x, 2)));
}
double calc_b(int x[], int y[], int n) {
	int s_x = 0, s_y = 0, xy = 0, x2 = 0, i;
	for(i = 0; i < n; i++) {
		xy += x[i] * y[i];
		s_x += x[i];
		s_y += y[i];
		x2 += pow(x[i], 2);
	}
	return (((s_y * x2) - (s_x * xy)) / (double)((n * x2) - (pow(s_x, 2))));
}
double calc_r(int x[], int y[], int n) {
	int s_x = 0, s_y = 0, xy = 0, x2 = 0, y2 = 0, i;
	for(i = 0; i < n; i++) {
		xy += x[i] * y[i];
		s_x += x[i];
		s_y += y[i];
		x2 += pow(x[i], 2);
		y2 += pow(y[i], 2);
	}
	return (((n * xy) - (s_x * s_y)) / (double)(sqrt((n * x2) - (pow(s_x, 2))) * sqrt((n * y2) - (pow(s_y, 2)))));	
}
void read() {
	int n, i;
	scanf("%d", &n);
	if(n == 0) {
		return;
	}
	else {
		int x[n], y[n];
		for(i = 0; i < n; i++) {
			scanf("%d%d", &x[i], &y[i]);
		}
		double a = calc_a(x, y, n);
		double b = calc_b(x, y, n);
		double r = calc_r(x, y, n);
		printf("a = %.2lf, b = %.2lf, R = %.2lf\n", a, b, r);
		read();
	}
}
int main() {
	read();
	return 0;
}