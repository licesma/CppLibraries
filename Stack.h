#pragma once
template <class T>
 class ListNode {
public:T val;
	   ListNode* next;
public: ListNode(T val) {
	this->val = val;
	this->next = nullptr;
}

};


template <class T>
class Stack {
public:ListNode<T>* head;
public:Stack() {
	head = nullptr;
}
	   void  push(T data) {
		   ListNode<T>* neuf; neuf = new ListNode<T>(data);
		   neuf->next = head;
		   head = neuf;
	   }
	   T peek() {
		   if (head!= nullptr)
				return head->val;
		   else 
			   throw "Stack is empty, nothing to peek";
	   }
	   T pop() {
		   if (head != nullptr) {
			   T res = head->val;
			   head = head->next;
			   return T;
		   }
		   else  throw "Stack is empty, nothing to pop";
		   
	   }
	   bool isEmpty() {
		   return head == nullptr;
	   }
};

