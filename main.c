#include <stdio.h>

int main() {
    int n;

    // Nhập số lượng phần tử n
    if (scanf("%d", &n) != 1) return 0;

    int a[n];
    double tongAm = 0;
    int demAm = 0;
    double tongDuong = 0;
    int demDuong = 0;

    // Nhập mảng và phân loại số âm, số dương
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < 0) {
            tongAm += a[i];
            demAm++;
        } else if (a[i] > 0) {
            tongDuong += a[i];
            demDuong++;
        }
    }

    // 1. Xử lý Trung bình cộng số âm
    if (demAm == 0) {
        printf("Mang khong co so am");
    } else {
        double trungBinhAm = tongAm / demAm;
        printf("%f", trungBinhAm); // %f mặc định in 6 chữ số thập phân
    }

    // Khoảng cách giữa hai kết quả
    printf(" ");

    // 2. Xử lý Tổng số dương
    if (demDuong == 0) {
        printf("Mang khong co so duong");
    } else {
        printf("%f", tongDuong);
    }

    return 0;
}