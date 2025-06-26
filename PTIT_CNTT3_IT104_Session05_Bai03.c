#include <stdio.h>

// Hàm đệ quy tính giai thừa
int factorial(int n) {
    if (n <= 1) {
        return 1; // Điều kiện dừng
    }
    return n * factorial(n - 1); // Gọi đệ quy
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Khong hop le\n");
        return 1;
    }

    int result = factorial(n); // Gọi hàm giai thừa
    printf("%d",result);
    return 0;
}
