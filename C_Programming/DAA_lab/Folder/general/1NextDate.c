
//next date program
#include<stdio.h>
int main(){
	int d,m,y,td,tm,ty;
	printf("Enter today date:");
	scanf("%d %d %d",&d,&m,&y);
	if((0 < d) && (d <= 31) && (y > 0) && (m > 0)){
		if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10){
			if(d < 31){
					td = d + 1;
					tm = m;
					ty = y;
				}
			else{
					td = 1;
					tm = m + 1;
					ty = y;
			}
		}
		else if(m == 4 || m == 6 || m == 9 || m == 11){
				if(d < 30){
					td = d + 1;
					tm = m;
					ty = y;
				}
				else{
					td = 1;
					tm = m + 1;
					ty = y;
				}
		}
		else if(m == 12){
				if(d < 31){
					td = d + 1;
					tm = m;
					ty = y;
				}
				else{
					td = 1;
					tm = 1;
					ty = y + 1;
				}
		}
		else if(m == 2){
				if(leap(y)){
					if(d < 29){
						td = d + 1;
						tm = m;
						ty = y;
					}
					else if (d == 29){
						td = 1;
						tm = m + 1;
						ty = y;
					}
					else{
						printf("Invalid date");
			
					}	
				}
				else{
					if(d < 28){
						td = d + 1;
						tm = m;
						ty = y;
					}
					else if (d == 28){
						td = 1;
						tm = m + 1;
						ty = y;
					}
					else{
						printf("Invalid date");
					}
					
				}
		}
		else{
			printf("Invalid date");
		}
		printf("Tommorrow date : %d-%d-%d\n",td,tm,ty);
    }
	else{
		printf("Invalid date");
	}
}
int leap(int y){
	int r;
	if((y % 4 == 0) && (y % 100 != 0)){
		r = 1;
	}
	else if(y % 100 == 0){
		r = 0;
	}
	else if(y % 400 == 0){
		r = 1;
	}
	else{
		r = 0;
	}
	return r; 
}
