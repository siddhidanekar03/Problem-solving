#include<iostream>
using namespace std;

class Node{
	public : 
	int data;
	Node* next;
	
	Node(int val)
	{
		data=val;
		next=NULL;
	}
};

class List{
	Node* head;
	Node* tail;

public:
    List()
	{
		head=tail=NULL;
	}
	
	void push_front(int val){
		Node* newNode=new Node(val);
		if(head==NULL)
		{
			head=tail=newNode;
			return;
		}
		else{
			newNode->next = head;
			head=newNode;
		}
	}
	
		void push_back(int val){
		Node* newNode=new Node(val);
		if(head==NULL)
		{
			head=tail=newNode;
			return;
		}
		else{
			tail->next=newNode;
			tail=newNode;
		}
	}
	
	
	void pop_front()
	{
		if(head==NULL)
		{
			cout<<"List is empty\n";
			return;
		}
		Node* temp=head;
		head=head->next;
		temp->next=NULL;
		
		delete temp;
	}
	
	void pop_back()
	{
		if(head==NULL){
			cout<<"List is empty";
			return;
		}
		Node* temp=head;
		while(temp->next!=tail)
		{
			temp=temp->next;
		}
		
		temp->next=NULL;
		delete tail;
		tail=temp;
	}
	
	void insert_mid(int val,int pos)
	{
		if(pos<0)
		{
			cout<<"Invalid position";
			return;
		}
		if(pos==0)
		{
			push_front(val);
			return;
		}
		Node* temp=head;
		for(int i=0;i<pos-1;i++)
		{
			temp=temp->next;
		}
		Node* newNode=new Node(val);
		newNode->next=temp->next;
		temp->next=newNode;
		
	}
	
	void printll(){
		Node* temp=head;
		
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;
	}
};

int main()
{
	List ll;
	ll.push_front(3);
	ll.push_front(2);
	ll.push_front(1);
	ll.insert_mid(4,1);

	ll.printll();
	
	
	return 0;
}
