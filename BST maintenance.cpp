/*
BST maintenance
*/
#include<vector>
#include<stdio.h>
using namespace std;
class Node{
	public:
		Node* left;
		Node* right;
		int Data;
		int Depth;
	Node(){
			right=left=NULL;
	}
	Node(int data,int depth){
		Data=data;
		Depth=depth;
		right=left=NULL;
	}
	void print()
	{
		printf("[%d-%d]\n",Data,Depth);
	}
};
vector<Node *> q;
class BSTree{
	private :
		Node* Root;
		long long sum;
	public :
		BSTree(){
			Root=NULL;
			sum=0;
		}
		long long getSum(){
			return sum;
		}
		void calculateSum()
		{
			Node * last=q[q.size()-1];
			for (vector<double>::size_type i = 0; i < q.size()-1; i++)
			{
				sum=sum+q[i]->Depth+last->Depth;
			}
		}
	void insert(long data){
		long d=0;
		if(Root==NULL)
			Root=new Node(data,d);
		else{
			d=1;
			Node *tmp=Root;
			Node* Curr=Root;
			bool IsInsert=false;
			while(1)
			{
				
				if(Curr->Data>data)
				{
					
					if(Curr->left==NULL)
					{
						Node * tmp=new Node(data,d);
						Curr->left=tmp;
						printf("\n%dl",d);
						q.push_back(tmp);
						break;
					}
					Curr=Curr->left;
				}	
				else
				{
					if(Curr->right==NULL)
					{
						Node * tmp=new Node(data,d);
						Curr->right=tmp;
						printf("\n%dr",d);
						break;
					}
					Curr=Curr->right;
					q.push_back(tmp);
				} 
					
				d++;
				
			}
			Root=tmp;
		}
		
	
	}	
	void print()
	{
			inorder(Root);
	}
	void inorder(Node * root)
	{
		if(root==NULL)
			return ;
		if(root->left)
			inorder(root->left);
		root->print();
		if(root->right)
			inorder(root->right);
		
	}
	
};

int main()
{
	BSTree t;
	t.insert(30);
	t.insert(40);
	t.insert(20);
	t.insert(10);
	t.print();
	return 0;
}
