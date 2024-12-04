#include<stdio.h>
#include<string.h>

// Hàm de quy de dao nguoc chuoi
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return; // Dung khi start >= end
    }

    // Hoán doi ký tu dau và cuoi
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Gui de quy cho phan còn lai
    reverseString(str, start + 1, end - 1);
}

int main(){
	 char str[100];

    // Nhap chuoi tu nguoi dùng
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    int length = strlen(str);

    // Ðao nguoc chuoi bang de quy
    reverseString(str, 0, length - 1);

    // In chuoi dã dao nguoc
    printf("Chuoi dao nguoc: %s\n", str);
	return 0;
}

