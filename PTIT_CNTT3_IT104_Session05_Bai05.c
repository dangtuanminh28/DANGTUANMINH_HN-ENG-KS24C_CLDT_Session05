#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm đệ quy chuyển chuỗi thành số nguyên
int stringToInt(char str[], int len) {
    if (len == 0)
        return 0;
    return stringToInt(str, len - 1) * 10 + (str[len - 1] - '0');
}

int main() {
    char str[100];
    int isNegative = 0;

    printf("Nhap chuoi ky tu so: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Xóa ký tự newline

    int startIndex = 0;

    // Xử lý số âm nếu có dấu trừ ở đầu
    if (str[0] == '-') {
        isNegative = 1;
        startIndex = 1; // Bỏ qua dấu trừ khi xử lý số
    }

    // Kiểm tra toàn bộ chuỗi còn lại phải là chữ số
    for (int i = startIndex; i < strlen(str); i++) {
        if (!isdigit(str[i])) {
            printf("Input khong hop le\n");
            return 1;
        }
    }

    // Chuyển chuỗi thành số
    int result = stringToInt(str + startIndex, strlen(str) - startIndex);
    if (isNegative)
        result = -result;

    printf("%d", result);
    return 0;
}
