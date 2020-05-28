// acao[i] representa o preço da ação de índice i
// arvore[i] representa o valor contido no nó i da árvore.
// Ou seja, arvore[i] contém o índice da ação mais barata
// no intervalo representado pelo nó i

// (no) representa o nó que estamos na função recursiva
// o nó que estamos representa o segmento [i, j]
// A função coloca altera o valor da ação de índice (posicao)
// para (novo_valor) e altera a árvore de acordo com o necessário

// sempre teremos que i <= posicao <= j

void atualiza(int no, int i, int j, int posicao, int novo_valor){ 
	
	if(i == j){ // se tivermos i = j, temos i = posicao = j. Logo, estamos no nó mais baixo da ávore
	
		// fazemos então as alterações triviais
		arvore[no] = i;
		acao[posicao] = novo_valor;
	}
	
	else{
		
		int esquerda = 2*no;     // índice do filho da esquerda
		int direita  = 2*no + 1; // índice do filho da direita
		
		// chamamos a função recursiva no nó necessário
		int meio = (i + j)/2;
		
		// se (posicao <= meio), vamos para o nó da esquerda (segmento [i, meio])
		if(posicao <= meio) atualiza(esquerda, i, meio, posicao, novo_valor);
		
		// se não, vamos para o nó da direita (segmento [meio+1, j])
		else atualiza(direita, meio+1, j, posicao, novo_valor);
		
		// agora, pegamos o melhor resultado entre os dois nós
		if( acao[ arvore[esquerda] ] < acao[ arvore[direita] ] ) arvore[no] = arvore[esquerda];
		else arvore[no] = arvore[direita];
	}
	
}
// queremos saber o índice da ação mais barata dentro do intervalo [A, B]
int consulta(int no, int i, int j, int A, int B){
	
	if(A <= i && j <= B){ // primeiro caso: [i, j] está contido em [A, B]
		return arvore[no];
	}
	
	if(i > B || A > j){ // segundo caso: [i, j] e [A, B] são disjuntos (ou i > j, que significa um nó inválido)
		return -1;
	}
	
	// terceiro caso: chamaremos a função nos dois filhos e retornaremos a melhor resposta
	int esquerda = 2*no;      // índice do filho da esquerda
	int direita  = 2*no + 1;  // índice do filho da direita
	
	int meio = (i + j)/2;
	
	// calculamos a resposta para cada filho
	int resposta_esquerda = consulta(esquerda, i, meio, A, B);
	int resposta_direita  = consulta(direita, meio+1, j, A, B);
	
	// retornamos a melhor resposta
	if(resposta_esquerda == -1) return resposta_direita;  // se o filho da esquerda não possui valor que nos interessa, retornamos o da direita
	if(resposta_direita == -1)  return resposta_esquerda; // se o filho da direita não possui valor que nos interessa, retornamos o da esquerda
	
	// se os dois nos interessam, retornamos o índice de menor custo
	if(acao[resposta_esquerda] < acao[resposta_direita]) return resposta_esquerda;
	else return resposta_direita;
}