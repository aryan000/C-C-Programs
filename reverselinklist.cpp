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
 
 int len( lnode *head)
 {
	  lnode *temp = head; int count =0;
	  while(temp!=NULL)
	  { count++;
             temp = temp->next;
} return count;
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
  lnode *temp = head;
  int count = len(head); int z=1;
  //cout<<" value of cound it " << count << endl;
   while(z<count/2)
   {    z++;
	   temp = temp->next; 
	  
   }
 // cout<< " z is : " << z ;  cin.get();
  lnode *var = reverse(temp->next); 
 // cout<< " value is : " << temp->value;
  temp->next = var;
  
  lnode *curr = head;
  while(curr!=NULL)
  {  // cout<<" reacheed"; cin.get();
	   cout<< curr->value << endl; 
	   curr = curr->next;
  }
 
 
 
	 
 }