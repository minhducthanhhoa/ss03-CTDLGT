#include<stdio.h>

// Hàm de quy tính tong các phan tu cua mang
int sumArray(int arr[], int n) {
    if (n == 0) {
        return 0; // Neu mang rong, tra ve 0
    }
    return arr[n - 1] + sumArray(arr, n - 1); // Tong phan tu cuoi và các phan tu con lai
}
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Nhap %d phan tu cua mang: \n", n);
	for(int i = 0; i < n; i++){
		printf("Phan tu thu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	// Tinh tong va in ra
	int sum = sumArray(arr, n);
	printf("Tong cac phan tu trong mang la: %d\n", sum);
	return 0;
}

