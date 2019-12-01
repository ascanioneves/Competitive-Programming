#include <bits/stdc++.h>
using namespace std;

stack<int> stk;

//.pop() -> apaga o elemento do topo da pilha
//.top() -> retorna o elemento do topo da pilha
//.empty() -> retorna true se a pilha e está vazia e false caso contrário
//push() -> adiciona um elemento no topo da pilha

void printar_stack()
{
  while(!stk.empty())
  {
    cout << stk.top() << endl;
    stk.pop();
  }
}
int main()
{
  stk.push(1);
  stk.push(2);
  stk.push(3);
  stk.pop();
  printar_stack();
  return 0;
}