#include "listas.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
	int c;
    Node* head = NULL;  
    
    push_final(&head, 6);
    push_final(&head, 6);  
        
    printLista(head);
    
    head =  pop_final(head);
    
    cout << endl;
    
	printLista(head);
    
    Size(head, c);
    
    Empty(&head);
    
    push_final(&head, 6);
 
    printLista(head);
    
    pop_final(head);
    
    printLista(head);
    
    push_final(&head, 6);  
        
    push_inicio(&head, 7);  
      
    push_inicio(&head, 1);  
      
    push_final(&head, 4); 
	 
    Size(head, c);  
  
    printLista(head);
    
	pop_final(head);
    
	Empty(&head);
 
    printLista(head);  
    
	Size(head, c);  

    return 0;  
}
