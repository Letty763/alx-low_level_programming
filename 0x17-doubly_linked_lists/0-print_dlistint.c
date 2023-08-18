#include "lists.h" 
  
 /** 
  * #include "lists.h" 
  
 /** 
  * print_dlistint - prints the data stored in a doubly linked list 
  * @h: head node of list 
  * 
  * Return: the number of nodes in the list 
  */ 
  
 size_t print_dlistint(const dlistint_t *h) 
 { 
         const dlistint_t *temp; 
         int nodes = 0; 
         /* check if h is null*/ 
         if (!h) 
                 return (nodes); 
         temp = h; 
  
         /* traverse through list*/ 
         while (temp) 
         { 
                 printf("%d\n", temp->n); 
                 nodes++; 
                 temp = temp->next; 
         } 
  
         return (nodes); 
 } 
