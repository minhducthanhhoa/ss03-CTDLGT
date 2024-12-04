#include<stdio.h>
#include<string.h>
#include<ctype.h>

// H�m loai bo khoang trong v� chuyen tat ca c�c k� tu ve chu thuong
void preprocessString(char* str) {
    int len = strlen(str);
    char temp[len + 1];
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (!isspace(str[i])) {
            temp[j++] = tolower(str[i]);
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

// H�m de quy kiem tra Palindrome
int isPalindromeRecursive(char* str, int left, int right) {
    if (left >= right) {
        return 1; // L� palindrome
    }
    if (str[left] != str[right]) {
        return 0; // Kh�ng phai palindrome
    }
    return isPalindromeRecursive(str, left + 1, right - 1);
}

// H�m kiem tra chuoi
void checkPalindrome(char* str) {
    preprocessString(str); // Xu l� chuoi
    int len = strlen(str);
    if (isPalindromeRecursive(str, 0, len - 1)) {
        printf("Palindrome valid\n");
    } else {
        printf("Palindrome invalid\n");
    }
}
 
int main(){
	 char str[100];

    printf("Nhap vao 1 chuoi: ");
    fgets(str, sizeof(str), stdin);

    // X�a k� tu xuong d�ng o cuoi chuoi neu c�
    str[strcspn(str, "\n")] = '\0';

    if (strlen(str) == 0) {
        printf("Palindrome valid\n");
    } else {
        checkPalindrome(str);
    }

	return 0;
}

