#include <iostream>
using namespace std;

struct node{
	int val;
	node* next;
};

node* h; //head pointer 
h=new node;  //new node created ..address is returned 

h->val=1;
h->next=Null;

node* current;

current =h;
////////////both the pointers are pointing to the same node 
/////now we want to create a new node that create a new node 
////set its value and link out current node with it 
 
 int* create_node(){
 	node *n;
 	n=new node;
 	
 	n->val=val;
 	n->next=NULL;
 	
 	return n;
 }





int main(){
	return 0;
}
