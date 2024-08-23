#include <stdio.h>
#include <math.h>

int main() {
	// Khai b�o c�c bi?n
	float a, b, c;
	float delta, x1, x2;

	// Nh?p h? s? t? ng??i d�ng
	printf("Nhap he so a: ");
	scanf("%f", &a);
	printf("Nhap he so b: ");
	scanf("%f", &b);
	printf("Nhap he so c: ");
	scanf("%f", &c);

	// Ki?m tra n?u a b?ng 0 th� kh�ng ph?i ph??ng tr�nh b?c 2
	if (a == 0) {
		printf("Day khong phai la phuong trinh bac 2.\n");
		if (b != 0) {
			x1 = -c / b;
			printf("Phuong trinh bac 1 co nghiem: x = %.2f\n", x1);
		}
		else {
			if (c == 0) {
				printf("Phuong trinh vo so nghiem.\n");
			}
			else {
				printf("Phuong trinh vo nghiem.\n");
			}
		}
	}
	else {
		// T�nh delta
		delta = b * b - 4 * a * c;

		// X? l� c�c tr??ng h?p c?a delta
		if (delta > 0) {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("Phuong trinh co hai nghiem: x1 = %.2f va x2 = %.2f\n", x1, x2);
		}
		else if (delta == 0) {
			x1 = -b / (2 * a);
			printf("Phuong trinh co mot nghiem kep: x1 = x2 = %.2f\n", x1);
		}
		else {
			printf("Phuong trinh vo nghiem thuc.\n");
		}
	}

	return 0;
}
