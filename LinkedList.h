#pragma once
using namespace std;
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
class LinkedList {
public: ListNode<T> * head;
public:
	LinkedList<T>() {
	this->head = nullptr;
}
		void	add(T obj) {
				ListNode<T>* ln; ln = new ListNode<T>(obj);
				if (head == nullptr) {
					head = ln;
				}
				else {
					ListNode<T>* ptr; ptr = head;
					while (ptr->next != nullptr) {
						ptr = ptr->next;
					}
					ptr->next=ln;
				}
		}
		void print() {
			ListNode<T>* ptr; ptr = head;
			cout << "[";
				if (ptr!= nullptr) {
					while (ptr->next != nullptr) {
						cout << ptr->val << ", ";
							ptr = ptr->next;
					}
					cout << ptr->val;
				}
			cout << "]";

		} 
};