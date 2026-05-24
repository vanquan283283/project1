#include <stdio.h>
int main(void)
{
	int ngay, thang, nam, so_mon = 5;
	char ten[50], gioitinh, xacnhan1, xacnhan2;
	double diemtrungbinh, mon1, mon2, mon3, mon4, mon5;

	printf("科目1の平均点をを教えてください\n");
	scanf_s("%lf", &mon1);

	printf("科目2の平均点をを教えてください\n");
	scanf_s("%lf", &mon2);

	printf("科目3の平均点をを教えてください\n");
	scanf_s("%lf", &mon3);

	printf("科目4の平均点をを教えてください\n");
	scanf_s("%lf", &mon4);

	printf("科目5の平均点をを教えてください\n");
	scanf_s("%lf", &mon5);
	diemtrungbinh = (mon1 + mon2 + mon3 + mon4 + mon5) / so_mon;
	if (mon1 + mon2 + mon3 + mon4 + mon5 < 30)
	{
		printf("もっと頑張ってね！\n");
	}
	else if (mon1 + mon2 + mon3 + mon4 + mon5 >= 30)
	{
		printf("よく頑張ったね！\n");
		printf("報酬をもらうため、個人情報を教えていただけますでしょうか？\n！");
		printf("はい は　Y　また　いいえ は　N を入力してください\n");
		
		scanf_s(" %c", &xacnhan1, 1);//thay getchar

		if (xacnhan1 == 'Y' || xacnhan1 == 'y')
		{
			printf("ありがとうございます\n");
			
			while (1)
			{
				getchar();
				printf("ではお名前を教えてください。\n");
				fgets(ten, sizeof(ten), stdin);
				
				printf("生年月日を教えてください。\n");
				scanf_s("%d/%d/%d", &ngay, &thang, &nam);
				
				getchar();
				printf("性別を教えてください。\n (M/F)\n\t");
				gioitinh = getchar();
				
				getchar();
				printf("ご回答ありがとうございます。\n　念の為再確認してください。\n\t");
				printf("以下の情報が間違いないでしょうか？\n");
				printf("お名前　：　%s\n", ten);
				printf("生年月日　：　 %d/%d/%d\n", ngay, thang, nam);
				printf("性別（M / F）　：　 %c\n", gioitinh);
				printf("平均点　：　 %f\n", diemtrungbinh);
				printf("いいえ は　N　また　はい は　Y を入力してください\n");
				
				scanf_s(" %c", &xacnhan2, 1);//thay getchar
				
				if (xacnhan2 == 'N' || xacnhan2 == 'n')
				{
					printf("ありがとうございます。\n");
					printf("報酬がまらえる時、メールでお知らせいたします。\n");
					printf("よいお年を！！\n");
					break;
				}
				else if (xacnhan2 == 'Y' || xacnhan2 == 'y')
				{
				
					printf("もう一度やり直してください！\n");
				
				}
				
			}


		}
		else if (xacnhan1 == 'N' || xacnhan1 == 'n')
		{
			printf("分かりました！！\n今日お疲れ様でした。");
		}

	}
	return 0;
}