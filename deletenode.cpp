 #include<bits/stdc++.h>
 using namespace std;
 typedef struct Lnode lnode;
 
 struct Lnode 
 {
	 int value;
	  struct Lnode *next;
 };
 
 void insert( lnode **head  , int data)
 { 
 
   lnode *temp = new lnode;
   if(!temp) cout<< " Error making a node !!";
   
   temp->value = data;
   temp->next= NULL;
   if(*head==NULL) { *head = temp;}
   else 
   {
	 
  lnode *ptr = *head;
  while(ptr->next!=NULL) { ptr= ptr->next; }
  ptr->next= temp;
   }
 }
 int len( lnode *head)
 {
	  lnode *temp = head; int count =0;
	  while(temp!=NULL)
	  { count++;
             temp = temp->next;
} return count;
 }
 lnode *reverse ( lnode *head)
 {   
	 lnode * prev = NULL;
	 lnode *curr = head;
	 lnode *next;
	 
	 while(curr!=NULL)
	 {next = curr->next; 
	 curr->next = prev;
	 prev = curr;
	 curr = next;
	 }
	   head = prev; 
	  /* next = head;
	   while(next!=NULL) 
	   {
		   cout<<next->value << " " ;
		   next = next->next;
	   } */
	 return head;;
	 
	 
	 
	 
 }
  
  void deleteNode(lnode* node) { 
        lnode *temp; 
        if(node==NULL || node->next==NULL) return;
        
        if(len(node)==2) {  node->value= node->next->value; node->next=NULL; return; }
        
      lnode *first , *second; 
        
        first = node; second = node->next->next;
        while(second->next!=NULL)
        {
            first = first->next;
            second = second->next;
        } 
        
        temp = first->next;
        first->next = second;
        free(temp);
        return;
    }
 
 int main()
 {  
 
   cout<<" Creating a link list" ; 
   int n;
   cout<<" enter number of elements : " ;
   cin>> n;
   register int i; 
   lnode *head; 
   head = new lnode;
   head = NULL;
   int x;
   for(i=0;i<n;i++)
   {
	   cout<<" enter the value to be inserted : " ;
	   cin>> x;
	   insert(&head,x);
   }
   
   deleteNode(head);
    
  lnode *curr = head;
  while(curr!=NULL)
  {    //cout<<" reacheed"; cin.get();
	   cout<< curr->value << endl; 
	   curr = curr->next;
  }
 
 
 
	 
 }