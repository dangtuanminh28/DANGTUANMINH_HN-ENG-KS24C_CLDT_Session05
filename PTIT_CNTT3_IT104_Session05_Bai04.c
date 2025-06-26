#include <stdio.h>

// Hàm đệ quy tính tổng
int sumN(int a, int b) {
    int result;
    if (a == b) {
        return a;
    } else {
        result = a + sumN(a + 1, b);
    }
    return result;
}

int main() {
    int firstNum, secondNum;
    int result;

    printf("Nhap so thu nhat: ");
    scanf("%d", &firstNum);
    printf("Nhap so thu hai: ");
    scanf("%d", &secondNum);
    if (firstNum <= 0 || secondNum <= 0) {
        printf("Khong hop le\n");
        return 1;
    }

    result = sumN(firstNum, secondNum);

    printf("\n %d + %d = %d", firstNum, secondNum, result);

    return 0;
}