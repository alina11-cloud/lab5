#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int nom1()
{
	double gr, rad;
	puts("Программа вычисления синуса");
	puts("Введите градус:");
	scanf("%lf", &gr);
	rad = gr * M_PI / 180;
	printf("Результат синуса %.1f град = %.6f\n", gr, sin(rad));
}
int nom2()
{
	const double t = 0.43;
	double x, y, a, b, lg_x;
	puts("Введите значение х:");
	scanf("%lf", &x);
	b = x * (pow(t, 3) + x);
	printf("b = %f\n", b);
	a = exp(2 * x) + sqrt(t);
	printf("a=%g\n", a);
	lg_x = log10(fabs(x));
	y = pow(lg_x, 3) + b;
	printf("y=%.4f\n", y);
	int A = (int)a, B = (int)b, C = (int)y;
	printf("A = %d, B = %d, C = %d\n", A, B, C);
	int res_a = (A % 2 == 0) ^ (B % 2 == 0);
	printf("Только одно из чисел четное (1 - да, 0 - нет): %d\n", res_a);
	int res_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
	printf("Каждое число кратно трем (1 - да, 0 - нет): %d\n", res_b);
}
int dz()
{
	double x, y,c,zn1,zn2,zn3;
	float z;
	puts("Введите значение х,y:");
	scanf("%lf %lf", &x,&y);
	puts("Введите значение z:");
	scanf("%g", &z);
	zn1 = pow(2,pow(y,x));
	zn2 = pow(pow(3, x), y);
	zn3 = (y * (atan(z) - (M_PI / 6)) / (fabs(x) + 1.0 / (pow(y, 2) + 1)));
	c = zn1 + zn2 - zn3;
	printf("c=%.6lf", c);
}

int main()
{
	setlocale(LC_CTYPE, "RUS");
	nom1();
	nom2();
	dz();
	return 0;
}