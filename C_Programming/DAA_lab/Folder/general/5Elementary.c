//Elementary school application
#include<stdio.h>
#include<stdlib.h>

main()
{
	int num1,num2,ans,inp,i,no=1;
	float score=0;
	srand(time(NULL));
	while(no<11)
	{
		printf("QUESTION NUMBER %d\n\n",no);
		num1=rand()%10;
		num2=rand()%10;
	again:
		switch(rand()%4)
		{
			case 0:
				ans = num1+num2;
				printf("How much is %d + %d?\n",num1,num2);
				break;
			case 1:
				ans = num1-num2;
				printf("How much is %d - %d?\n",num1,num2);
				break;
			case 2:
				ans = num1*num2;
				printf("How much is %d * %d?\n",num1,num2);
				break;
			case 3:
				if(num2==0)
				{
					goto again;
					break;
				}
				ans = num1/num2;
				printf("How much is %d / %d?\n",num1,num2);
				break;
		}
		scanf("%d",&inp);
		if(inp==ans)
			score++;
		while(inp!=ans)
		{
			switch(rand()%4)
			{
				case 0:
					printf("NO! Please try again.\n");
					break;
				case 1:
					printf("Wrong! Try once more.\n");
					break;
				case 2:
					printf("Don't give up!\n");
					break;
				case 3:
					printf("Keep on trying...\n");
					break;
			}
			scanf("%d",&inp);
			score-=0.5;
		}
		int i = rand()%3;
		if(i==0)
			printf("Very good!\n");
		else if(i==1)
			printf("Excellent!\n");
		else if(i==2)
			printf("Nice work!\n");
		else
			printf("Keep up the good work!\n");
		no++;
		printf("____________________________\n\n");
	}
	score*=10;
	printf("You have scored --> %.2f%%\n",score);
	if(score<75)
		printf("\nPlease ask your instructor for extra help!");
}
