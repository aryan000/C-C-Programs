// write a function to get the nth node in a link list

#include<bits/stdc++.h>
using namespace std;

struct node{
 int data;
 struct node *next;
 };
 
void insert(node **head , int data)
{ 
   node *temp = new node;
   temp->data = data;
   temp->next = NULL;
   if(*head==NULL) *head = temp;
   
   else {node *ptr;
   ptr = *head;
   
   while(ptr->next!=NULL)
   { ptr = ptr->next;}
   
   ptr->next = temp; }
   
 }

int main()
{ 
   node *head;
   head = new node;
   head = NULL;
   int n;
  cout<< " enter the number of node : " ;
  cin>> n;
  int val;
  int i;
  for(i=0;i<n;i++)
  { cout<<"enter data " ; cin>> val;
    insert(&head,val);
  }

  cout<<" which node";
  int nod;
  cin>> nod;
  
  node *curr = head;
  int pos=1;
  while(pos<nod){ pos++; curr= curr->next;}
  
  cout<<" value is : " << curr->data ; 
 



}