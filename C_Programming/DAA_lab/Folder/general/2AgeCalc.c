//age calculation
#include<stdio.h>
int main(){
	int td,tm,ty,bd,bm,by,d,m,y,f = 1,mo[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	printf("Enter today date:");
	scanf("%d %d %d", &td,&tm,&ty);
	printf("Enter birthday date:");
	scanf("%d %d %d",&bd,&bm,&by);
	if((by > ty) || (td < 0) || (td > 31) || (bd < 0) || (bd > 31) || (tm < 0) || (tm > 12) || (bm < 0) || (bm > 12) || (ty < 0) || (by < 0)){
		f = 0;
	}
	if(tm == 2){
		if(leap(ty)){
			if(td > 29){
				f = 0;
			}
		}
		else if(td > 28){
			f = 0;
		}
	}
	if((tm == 4) || (tm == 6) || (tm == 9) || (tm == 11)){
		if(td > 30){
			f = 0;
		}
	}
	if(bm == 2){
		if(leap(by)){
			if(bd > 29){
				f = 0;
			}
		}
		else if(bd > 28){
			f = 0;
		}
	}
	if((bm == 4) || (bm == 6) || (bm == 9) || (bm == 11)){
		if(bd > 30){
			f = 0;
		}
	}
	y = td - (by - 1);
	if((bd > td)){
		td = td + mo[bm - 1];
		tm = tm - 1;
	}
	if(bm > tm){
		ty = ty - 1;
		tm = tm + 12;
	}
	d = td - bd;
	m = tm - bm;
	y = ty - by;
	
	if(f == 0){
		printf("Invalid input");
	}
	else{
		printf("%d years %d months %d days",y,m,d);
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
