#include<stdio.h>
void firstfit(int processize[],int n,int blocksize[],int m)
{
    int allocated[n];
    int alreadyallocated[m];
    for(int i=0;i<n;i++){
        allocated[i]=-1;
    }
    for(int i=0;i<m;i++){
        alreadyallocated[i]=-1;
    }
    int i,j;
    for(i=0;i<n;i++){
        int flag=0;
        for(j=0;j<m;j++){
            if(processize[i]<=blocksize[j] && alreadyallocated[j]==-1){
                alreadyallocated[j]=0;
                allocated[i]=j+1;
                flag=1;
                break;
            }
        }
        if(flag==0)
          allocated[i]=0;
    }
    printf("process\t\tallocated_sequence");
    for(i=0;i<n;i++){
        printf("\n%d\t\t",i+1);
        printf("%d",allocated[i]);
    }
}
int main(){
    int n,m;
    printf("Enter the no of process:");
    scanf("%d",&n);
    printf("Enter the no of blocks:");
    scanf("%d",&m);
    int processize[n];
    int blocksize[m];
    int i;
    for(i=0;i<n;i++){
        printf("Enter %d process:",i+1);
        scanf("%d",&processize[i]);
    }
    for(i=0;i<m;i++){
        printf("Enter %d partition:",i+1);
        scanf("%d",&blocksize[i]);
    }
    firstfit(processize,n,blocksize,m);
}
