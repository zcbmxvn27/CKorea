#include <stdio.h>
#include <Windows.h>

void main() {
	int 결제선택1 = 0;
	char 결제선택2[100];
	int 햄버거1 = 0;
	char 햄버거2[100];
	int 가격 = 0;
	int 수량 = 0;
	int 확인 = 0;
	char 결제확인;
	char 영수증;
	printf("결제 수단을 선택하셔주세요. (번호를 입력해주세요)\n");
	printf("1.카드 | 2.디지털 쿠폰/교환권 | 3.현금\n");
	while (확인 == 0) {
		printf(">>>");
		scanf("%d", &결제선택1);
		switch (결제선택1) {
		case 1:
			sprintf(결제선택2, "카드");
			확인 = 1;
			break;
		case 2:
			sprintf(결제선택2, "디지털 쿠폰/교환권");
			확인 = 1;
			break;
		case 3:
			sprintf(결제선택2, "현금");
			확인 = 1;
			break;
		default:
			printf("다시 입력해주세요\n");
			break;
		}
	}
	printf("\n");
	printf("아래에서 햄버거를 골라주세요. (번호를 입력해주세요)\n");
	printf("1.치즈 NO.5 [4,200] | ");
	printf("2.한우불고기 [7, 200]\n");
	printf("3.T-REX버거 [3,800] | ");
	printf("4.빅블 [5,900]\n");
	printf("5.불고기버거 [5,200] | ");
	printf("6.AZ버거 [6,800]\n");
	printf("7.와규에디션Ⅱ [6,000] | ");
	printf("8.올더버거비프 [5,800]\n");
	while (확인 == 1) {
		printf(">>>");
		scanf("%d", &햄버거1);
		switch (햄버거1) {
		case 1:
			sprintf(햄버거2, "치즈 NO.5");
			가격 = 4200;
			확인 = 0;
			break;
		case 2:
			sprintf(햄버거2, "한우불고기");
			가격 = 7200;
			확인 = 0;
			break;
		case 3:
			sprintf(햄버거2, "T-REX 버거");
			가격 = 3800;
			확인 = 0;
			break;
		case 4:
			sprintf(햄버거2, "빅블");
			가격 = 5900;
			확인 = 0;
			break;
		case 5:
			sprintf(햄버거2, "불고기버거");
			가격 = 5200;
			확인 = 0;
			break;
		case 6:
			sprintf(햄버거2, "AZ버거");
			가격 = 6800;
			확인 = 0;
			break;
		case 7:
			sprintf(햄버거2, "와규에디션Ⅱ");
			가격 = 6000;
			확인 = 0;
			break;
		case 8:
			sprintf(햄버거2, "올더버거비프");
			가격 = 5800;
			확인 = 0;
			break;
		default:
			printf("다시 입력해주세요\n");
			break;
		}
	}
	printf("\n");
	printf("수량을 입력해주세요.");
	printf(">>>");
	scanf("%d", &수량);
	printf("\n");
	printf("\n");
	printf("제품 : %s  |  수량 : %d  |  금액 : %d  |  결제 수단 : %s \n", 햄버거2, 수량, 가격, 결제선택2);
	printf("주문하시겠습니까? (Y or N)\n");
	printf(">>>");
	getchar();
	scanf("%c", &결제확인);
	if (결제확인 == 'N') {

	}
	else {

	}
	
	if(!(strcmp(결제선택2, "현금")) || (!strcmp(결제선택2, "디지털 쿠폰/교환권"))){
		printf("결제는 계산대에서 도와드리겠습니다. \n");
		printf("영수증을 가져가 주시기 바랍니다, 감사합니다.");
	}
	else {
		printf("영수증을 가져가시겠습니까? (Y or N)\n");
		printf(">>>");
		getchar();
		scanf("%c", &영수증);
		if (영수증 == 'Y') {
			printf("영수증을 출력중");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".\n");
			Sleep(1000);
			printf("영수증을 가져가 주시기 바랍니다, 감사합니다.");
		}
		else {
			printf("이용해주셔서 감사합니다.");
		}
	}


}