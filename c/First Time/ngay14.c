#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int boolean = 1;
	int i;
	int choose;
	char *arr;
	char *arr2;
	arr = (char *)malloc(10000 * sizeof(char));
	arr2 = (char *)malloc(10000 * sizeof(char));

	printf("Nhap vao mang ban muon thao tac: ");
		gets(arr);
	do{
		printf("----- LUA CHON THAO TAC VOI MANG -----\n1. In ra do dai cua mang\n2. In ra mang dao nguoc\n3. Nhap vao mang 2, so sanh 2 mang\n4. Noi mang 2 vao mang 1\n5. Thoat\nNhap lua chon cua ban: ");
		choose = checkChoose(5);
		switch(choose){
			case 1:
//				printf("Do dai cua mang la: %d\n", strlen(arr));
				printf("Do dai cua mang la: %d\n", arrLength(arr));
				break;
			case 2:
				daoNguocMang(arr);
				printf("Mang sau khi dao nguoc la: %s\n", arr);
				break;
			case 3:
				fflush(stdin);
				printf("Nhap vao mang 2 de so sanh voi mang 1: ");
				gets(arr2);
				printf("%d\n", strcmp(arr, arr2));
				break;
			case 4:
				break;
			case 5:
				exit(0);
				break;
		}
	}while(boolean == 1);
}
int checkChoose(int numberOfChoose){
	int choose = 0;
	int check = 1;
	do{
			scanf("%d", &choose);
			if(choose <= numberOfChoose && choose > 0){
				check = 0;
			}else{
				printf("\nKhong tim thay lua chon, xin nhap lai: ");
			}		
		}while(check == 1);
	return choose;
}

int arrLength(char *arr){
	int count = 0;
	int i;
	for(i = 0; arr[i] !='\0'; i++){
		count++;
	}
	return count;
}

void daoNguocMang(char *arr){
	int i;
	int length = arrLength(arr) - 1;
	char temp;
	int phu = 0;
	for(i = 0; i < ceil(length / 2); i++){
		temp = arr[i];
		arr[i] = arr[length-phu];
		arr[length-phu] = temp;
		phu++;
	}
}

int soSanh2Mang(char *arr, char *arr2){
	int i;
	int check;
	for(i = 0; arr[i]!='\0'; i++){
		
	}
}

