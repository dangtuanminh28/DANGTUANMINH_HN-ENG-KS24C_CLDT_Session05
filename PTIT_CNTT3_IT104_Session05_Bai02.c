#include <stdio.h>

// Hàm đệ quy tính tổng từ 1 đến n
int sumToN(int n) {
    if (n == 0) {
        return 0; // Điều kiện dừng
    }
    return n + sumToN(n - 1); // Cộng dồn từ n về 1
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Khong hop le\n");
        return 1;
    }

    int result = sumToN(n); // Gọi hàm đệ quy
    printf("%d\n", result); // In kết quả
    return 0;
}