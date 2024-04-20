#include<stdio.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
}*tree=NULL;
struct node *insertElement(int val)
{
struct node *ptr, *nodeptr, *parentptr;
ptr = (struct node*)malloc(sizeof(struct node));
ptr->data = val;
ptr->left = NULL;
ptr->right = NULL;
if(tree==NULL)
{
tree=ptr;
tree->left=NULL;
tree->right=NULL;
}
else
{
parentptr=NULL;
nodeptr=tree;
while(nodeptr!=NULL)
 {
parentptr=nodeptr;
if(val<nodeptr->data)
nodeptr=nodeptr->left;
else
nodeptr = nodeptr->right;
 }
if(val<parentptr->data)
parentptr->left = ptr;
else
parentptr->right = ptr;
}
return tree;
}
void preorder(struct node *trav)
{
if(trav != NULL)
{
printf("%d\t", trav->data);
preorder(trav->left);
preorder(trav->right);
}
}
void inorder(struct node *trav){

if(trav != NULL)
{
inorder(trav->left);
printf("%d\t", trav->data);
inorder(trav->right);
}	
}
void postorder(struct node *trav){

if(trav != NULL)
{
postorder(trav->left);
postorder(trav->right);
printf("%d\t", trav->data);
}	
}
struct node max_val(struct node* travel){
	if(travel!=NULL){
		if(travel->right==NULL){
			printf("%d",travel->data);
		}
		else{
			 max_val(travel->right);
		}
	}
}

struct node min_val(struct node* travel){
	if(travel!=NULL){
		if(travel->left==NULL){
			printf("%d",travel->data);
		}
		else{
			 min_val(travel->left);
		}
	}
}
int main(){
	int i,j;
	printf("enter no.of nodes you want to insert:");
	scanf("%d",&i);
	while(i){
		printf("\nenter node:\t");
		scanf("%d",&j);
		insertElement(j);
		i--;
	}
	preorder(tree);
	printf("\n");
	postorder(tree);
	printf("\n");
	inorder(tree);
	printf("\nlargest value is:");
	max_val(tree);
	printf("\n smallest value is:");
	min_val(tree);
}
