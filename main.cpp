#include <bits/stdc++.h>

//    Following is the class structure of the Node class:

       class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
               this->data = data;
              this->next = NULL;
            }
        };


int getLength(Node* head){
    int count = 0;
    while(head!=NULL){
        head=head->next;
        count++;
    }
    return count;
}
Node *findMiddle(Node *head) {
    int len=getLength(head);
	int ans=(len/2);
	Node* temp=head;
	int cnt=0;
	while(cnt<ans){
		temp=temp->next;
		cnt++;
	}
	return temp;
}