#include <stdio.h>

int main(){
	char *email = "y_0602@naver.com";
	char *phone = "010-4199-1606";
	int input;
	while(1){
		printf("input(1:email,2:phone,other:quit) : ");
		scanf("%d",&input);
		if(input == 1)
			printf("%s\n",email);
		else if(input == 2)
			printf("%s\n",phone);
		else
			break;
	}
}
