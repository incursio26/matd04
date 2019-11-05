#include <bits/stdc++.h>
#include <iostream>
using namespace std; 
  
// declaração da lista
struct Node  
{  
    int valor;  
    Node *prox;  
};  

// Função para inserir valor no inicio da lista:
void push_inicio(Node** Ap_Lista, int new_valor)  
{  
    Node* new_node = new Node(); 
    new_node->valor = new_valor;  
    new_node->prox = (*Ap_Lista);  
    (*Ap_Lista) = new_node;  
}  
  
// Função para inserir valor no final da lista:
void push_final(Node** Ap_Lista, int new_valor)  
{  
    Node* new_node = new Node(); 
    Node *last = *Ap_Lista; 
    new_node->valor = new_valor;  
    new_node->prox = NULL;  
  
    if (*Ap_Lista == NULL)  
    {  
        *Ap_Lista = new_node;  
    }  
  	
  	else
  	{
		while (last->prox != NULL)
		{
	   		last = last->prox;  
 		}
 		
      	last->prox = new_node;    
	}
}  

// Função que verifica se lista está vazia
void Empty(Node** Ap_Lista)
{
	if (*Ap_Lista != NULL)  
    {  
        cout << "lista nao esta vazia" << endl;
    }
	  
    else
    {
    	cout << "lista esta vazia" << endl;
	}
}

//Função que retorna tamanho da lista
void Size(Node *node, int c)
{
	if (node != NULL)
	{
		c = 0;
		while (node != NULL)  
    	{  
        	c++;  
        	node = node->prox;  
    	}
		cout << "O tamanho da lista eh: " << c << endl;  
	}
	
	else
	{
		cout << "A lista nao possui elementos." << endl;  
	}
}

//Função que retira o último valor da lista
Node* pop_final(struct Node* Ap_Lista)
{
//Se a lista é vazia:
	if (Ap_Lista == NULL)
	{
	    cout << "A lista nao possui elementos." << endl;
	    return NULL;
	}
	
//Se a lista contém um elemento: 
    else if (Ap_Lista->prox == NULL)
    {
    	delete Ap_Lista;
    	
    	cout << "Agora, a lista nao possui elementos." << endl;
    	return NULL;
	}
	
//Se a lista contém mais de um elemento:
	else
	{
		Node* penultimo = Ap_Lista;
		 
	   	while (penultimo->prox->prox != NULL)
    	{
    		penultimo = penultimo->prox; 
  		}
  		
    	delete (penultimo->prox); 
    	penultimo->prox = NULL; 
    	
    	return Ap_Lista;
	}
}

// Função que mostra a lista na tela:  
void printLista(Node *node)  
{  
    while (node != NULL)  
    {  
        cout << node->valor << " ";  
        node = node->prox;  
    }  
    cout << endl;
}  
