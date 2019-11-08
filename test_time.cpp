
#include <stdio.h>
#include <ctime>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	clock_t start = clock();

	double a, b, c, det, root1, root2, RPart, IPart;
	printf("Введите коэффициенты a, b, c: ");
	//cin >> a >> b >> c;
	scanf_s("%lf %lf %lf", &a, &b, &c);


	det = b * b - 4 * a * c;
	if (det > 0) {
		det = sqrt(det);
		root1 = (-b + det)/(2*a);
		root2 = (-b - det)/(2*a);
		printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
	}

	else if (det == 0) {
		root1 = root2 = -b / (2 * a);
		printf("root1 = root2 = %.2lf\n", root1);
	}

	else {
		det = sqrt(-det);
		RPart = -b / (2 * a);
		IPart = det / (2 * a);
		printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi\n", RPart, IPart, RPart, IPart);
	}

	clock_t end = clock();
	double search_time = (double)(end-start) / CLOCKS_PER_SEC;
	printf("Work-time: %lf second!", search_time);
	return 0;
}
