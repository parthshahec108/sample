#include <stdio.h>

struct list {
	int a;
	struct list* next
};
typedef struct list node;

void create_list(int num, node* member)
{
	if (num <= 0)
		printf("Nothing to create!");
	else {
		printf("Enter a number: ");
		scanf("%d", &(member->a));
		member->next = malloc(sizeof(node));
		create_list(--num, member->next);
	}
	return;
}

void print_list(int num, node* member)
{
	int dis = 0;
	while (num >= 0) {
		printf("Member %d: %d", ++dis, member->a);
		num--;
		print_list(num, member->next);
	}
}
void main()
{
	int count = 0;
	node* head;
	head = malloc(sizeof(node));
	head->a = 0;
	head->next = NULL;
	printf("How many member do you want to create: ");
	scanf("%d", &count);
	create_list(count, head);
	print_list(count, head);
}
