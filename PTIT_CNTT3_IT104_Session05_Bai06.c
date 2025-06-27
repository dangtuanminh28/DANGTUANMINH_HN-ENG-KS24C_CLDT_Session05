#include <stdio.h>

// Hàm đệ quy tính tổng mảng
int sumArray(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int arr[100];
    int n;

    // Nhập số lượng phần tử của mảng
    do {
        printf("Nhap so luong phan tu cua mang:");
        scanf("%d", &n);
        if (n <= 0 || n > 100)
            printf("So luong khong hop le. Vui long nhap lai!\n");
    } while (n <= 0 || n > 100);

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Gọi hàm đệ quy tính tổng và in kết quả
    int sum = sumArray(arr, n);
    printf("Tong cac phan tu trong mang la: %d\n", sum);

    return 0;
}