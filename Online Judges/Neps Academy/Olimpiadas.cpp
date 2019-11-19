#include <iostream>
#include <algorithm>

struct pais{
	int ouro, prata, bronze, id;
};
int func(pais a, pais b){
	if(a.ouro != b.ouro){
		return a.ouro > b.ouro;
	}
	if(a.prata != b.prata){
		return a.prata > b.prata;
	}
	if(a.bronze != b.bronze){
		return a.bronze > b.bronze;
	}
	return a.id < b.id;
}
int main(){
	int n, m;
	int o, p, b; //indice na leitura do ouro, prata e bronze
	pais v[105];
	std::cin>>n>>m;
	for(int i = 0; i < n; i++){
		v[i].ouro = 0;
		v[i].prata = 0;
		v[i].bronze = 0;
		v[i].id = i + 1;
	}
	for(int i = 0; i < m; i++){
		std::cin>>o>>p>>b;
		v[o - 1].ouro += 1;
		v[p - 1].prata += 1;
		v[b - 1].bronze += 1;
	}
	std::sort(v, v + n, func);
	for(int i = 0; i < n; i++){
		std::cout<<v[i].id<<" ";
	}
	std::cout<<std::endl;
	return 0;
}