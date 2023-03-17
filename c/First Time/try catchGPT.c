#include <stdio.h>
#include <ctype.h>

int main() {
   int num;
   printf("Enter a number: ");
   if (scanf("%d", &num) != 1) {
      printf("Error: Invalid input\n");
      return 1;
   }
   printf("You entered: %d\n", num);
   return 0;
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
