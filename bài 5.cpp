#include <stdio.h>

int main() {
    int month, year; 
    printf("Hay nhap month (1-12): ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);
    do {
    printf("vui long nhap lai month (1-12): ");
    scanf("%d", &month);
}
    while (month > 12 || month < 1)
	 
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Month %d co 30 day\n", month);
    }
    else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("Month %d co 29 day\n", month);
        }
        else {
            printf("Month %d co 28 day\n", month);
        }
    }
    else {
        printf("Month %d co 31 day\n", month);
    }

    return 0;
}

