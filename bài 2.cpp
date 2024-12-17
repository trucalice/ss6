#include <stdio.h>

int main() {
    int a, b, c, d, e;             
    int count_chan = 0, count_le = 0;
    printf("Nhap 5 so nguyen bat ky: \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (a % 2 == 0) {
        count_chan++;
    } else {
        count_le++;
    }
    if (b % 2 == 0) {
        count_chan++;
    } else {
        count_le++;
    }
    if (c % 2 == 0) {
        count_chan++;
    } else {
        count_le++;
    }
    if (d % 2 == 0) {
        count_chan++;
    } else {
        count_le++;
    }
    if (e % 2 == 0) {
        count_chan++;
    } else {
        count_le++;
    }
    printf("So luong so chan: %d\n", count_chan);
    printf("So luong so le: %d\n", count_le);

    return 0;
}

