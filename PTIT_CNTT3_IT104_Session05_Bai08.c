#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm đệ quy chuyển chuỗi số sang số nguyên
int convertStringToInt(char *str, int len, int *isValid) {
    if (len == 0) return 0;

    char ch = str[0];
    if (!isdigit(ch)) {
        *isValid = 0;
        return 0;
    }

    int digit = ch - '0';
    int partial = convertStringToInt(str + 1, len - 1, isValid);
    return digit * pow10(len - 1) + partial;
}

// Hàm tính 10^n (vì không dùng <math.h>)
int pow10(int n) {
    if (n == 0) return 1;
    return 10 * pow10(n - 1);
}

int main() {
    char input[100];
    printf("Nhap chuoi so: ");
    scanf("%s", input);

    int isValid = 1;
    int result = convertStringToInt(input, strlen(input), &isValid);

    if (isValid) {
        printf("%d\n", result);
    } else {
        printf("Input khong hop le\n");
    }

    return 0;
}
