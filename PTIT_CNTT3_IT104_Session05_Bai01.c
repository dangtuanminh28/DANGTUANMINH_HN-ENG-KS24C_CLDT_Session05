#include <stdio.h>

/**
 * Hàm đệ quy in ra các số từ current đến n
 * @param current Số hiện tại (bắt đầu từ 1)
 * @param n Số giới hạn
 */
void printNumber(int current, int n) {
    if (current > n) return; // Điều kiện dừng

    printf("%d ", current);  // In số hiện tại
    printNumber(current + 1, n); // Gọi lại chính nó với số tiếp theo
}

int main() {
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So khong duoc am\n");
        return 1;
    }

    printNumber(1, n); // Bắt đầu từ 1
    return 0;
}
