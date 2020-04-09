#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define maxN 300

typedef struct Stack Stack;

struct Stack
{
	int size;
	char str[maxN];
};

bool isEmpty(Stack *stk)
{
	return (stk->size == 0);
}
void push(Stack *stk, char item)
{
	stk->str[stk->size++] = item;
	return;
}
void pop(Stack *stk)
{
	--stk->size;
	return;
}
int top(Stack *stk)
{
	return stk->str[stk->size-1];
}
bool can(char c1, char c2) {
	if(c1 == 'C' && c2 == 'F') return true;
	if(c1 == 'F' && c2 == 'C') return true;
	if(c1 == 'B' && c2 == 'S') return true;
	if(c1 == 'S' && c2 == 'B') return true;
	return false;
}
int connections(char string[]) {
	int ans = 0;
	Stack *stk = (Stack *) malloc(sizeof(Stack));
	stk->size = 0;
	for(int i = 0; i < strlen(string); i++) {
		if(isEmpty(stk)) push(stk, string[i]);
		else if(can(string[i], top(stk))) {
			ans++;
			pop(stk);
		} else {
			push(stk, string[i]);
		}
	}
	return ans;
}
void read() 
{
	char string[maxN];
	
	if(scanf(" %s", string) == EOF) 
		return;
	else 
	{
		int ans = connections(string);
		printf("%d\n", ans);
		read();
	}
}
int main() 
{
	read();
	return 0;
}
