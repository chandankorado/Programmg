#include<stdio.h>
int main(){
char m[50];
int n;
printf("enter a string:");
scanf("%s",&m);
printf("enter the number of characters in the string:");
scanf("%d",&n);
int i,j,k;
for(i=0;i<n;i++){
    for(j=i;j<(n-i);j++){
        if(i==j){
        for(k=i;k>0;k--){
            printf(" ");
        }}
        printf("%c ",m[j]);
    }
    printf("\n");
}
}
