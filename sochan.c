#include<stdio.h>
#include<conio.h>

int Tong(int arr[], int n)
{
    if(n == 0){
        return 0;
    }
    if (arr[n - 1] % 2 == 0){
        return arr[n - 1] + Tong(arr, n - 1);
        }

	else {
        return 0 + Tong(arr, n - 1);
    }
}

int main()
{
    int myArray[50];
    int n;
    int Sum = 0;
    printf("\n Nhap n = "); 
	scanf("%d", &n);

    Tong(myArray,  n);
    Sum = Tong(myArray,  n);
    printf("Tong = %d");

    getch();
    return 0;
}