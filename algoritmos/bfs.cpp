

bool valida_mov(int x, int y){
   if(x < 0 || y < 0 || x >= n || y <= m) 
      return false;
   return true;
}// movimentos em um tabuleiro
mx[8]={-1,-1,-1,0,1,1,1,0};
my[8]={-1,0,1,1,1,0,-1,-1};
//valida_mov(x+mx[i], y+my[i])

for(i;i < 8;i++){
   if(valida_mov(x+mx[i], y+my[i]))
      if(dist[x+mx[i][y+my[i]]] == -1)
         // adiciona no set, por exemplo!
}


//  o array componente está inicializado para -1 em todas suas casas
void BFS_usp(int v){
   for(int i =1; i <= n;i++)
      dist[i] = -1;
   queue <int> fila;
   fila.push(v);
   dist[v] = 0;
   int aux;
   while(!fila.empty()){
      aux = fila.front();
      fila.pop();
      for(int x=0; x < adj[aux].size(); x++){
         if(dist[adj[aux][x]] == -1){
            dist[adj[aux][x]] = dist[aux]+1;
            fila.push(adj[aux][x]); 
         }
      }
   }
   
} // is O(m + n), onde m eh o numero de arestas e n eh o numero de vertices.

//neps
void BFS(int x){
	
	queue<int> fila;
	fila.push(x); // fila da nossa BFS
	
	componente[x] = valor; // colocamos o valor adequado aqui
	
	int atual = 0; // atual posição que estamos na fila
	
	while(!fila.empty()){ // Enquanto a fila não for vazia
		
		// vamos trabalhar com o primeiro da fila
		int v = fila.front();
		fila.pop(); // para movermos o elemento da fila
		
		for(int i = 0;i < (int)vizinhos[v].size();i++){
			
			int u = vizinhos[v][i];
			
			if(componente[u] == -1){
				
				// se u ainda não tiver sido visitado, o acrescentamos a fila
				componente[u] = componente[v];
				fila.push(u);
			}
		}
	}
}

