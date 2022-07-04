#include <stdio.h>
#define PHI 3.14
int main()
{
	printf("Program Keliling dan Luas Lingkaran\n");
	double r, luas, kll;
	printf("Masukkan jari-jari lingkaran: ");
	scanf("%lf", &r);
	kll = 2 * r * PHI;
	luas = r * r * PHI;
	printf("Luas lingkaran dengan jari-jari %lf adalah %lf\n", r, luas);
	printf("Keliling lingkaran dengan jari-jari %lf adalah %lf\n", r, kll);
	return 0;
}