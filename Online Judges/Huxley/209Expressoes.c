#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define maxN 100000

typedef struct Colc Colc;
struct Colc
{
  int current_size;
  char items[maxN];
};

typedef struct Chave Chave;
struct Chave
{
  int current_size;
  char items[maxN];
};

typedef struct Parent Parent;
struct Parent
{
  int current_size;
  char items[maxN];
};

Colc* createStack()
{
  Colc *new_stack = (Colc *) malloc(sizeof(Colc));
  new_stack->current_size = 0;
  return new_stack;
}

void push(Colc *stk, char item) { stk->items[stk->current_size++] = item; }

bool is_empty(Colc *stk) { return (stk->current_size == 0); }

void pop(Colc *stk) { --stk->current_size; }

int top(Colc *stk) { return stk->items[stk->current_size-1]; }

int main()
{
  bool p, c, k;
  int n, i;
  Colc *stk_clc = createStack();
  Chave *stk_chv = createStack();
  Parent *stk_prt = createStack();
  scanf("%d", &n);
  while(n--)
  {
    bool p = true, c = true, k = true;
    char ch[100000];
    scanf(" %s", ch);
    for(i = 0; i < strlen(ch); i++)
    {
      if(ch[i] == '(')
        push(stk_prt, '(');
      else if(ch[i] == ')')
      {
        if(is_empty(stk_prt))
          p = false;
        else 
          pop(stk_prt);
      }
      if(ch[i] == '[')
        push(stk_clc, '[');
      else if(ch[i] == ']')
      {
        if(is_empty(stk_clc))
          c = false;
        else 
          pop(stk_clc);
      }
      if(ch[i] == '{')
        push(stk_chv, '{');
      else if(ch[i] == '}')
      {
        if(is_empty(stk_chv))
          k = false;
        else 
          pop(stk_chv);
      }
    }
    if(!is_empty(stk_prt)) 
      p = false;
    if(!is_empty(stk_clc)) 
      c = false;
    if(!is_empty(stk_chv)) 
      k = false;
    if(p && c && k)
      printf("S\n");
    else 
      printf("N\n");
    
    while(!is_empty(stk_prt))
      pop(stk_prt);
    while(!is_empty(stk_clc))
      pop(stk_clc);
    while(!is_empty(stk_chv))
      pop(stk_chv);
  }
  return 0;
}