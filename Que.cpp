#include <iostream>

using namespace std;

typedef struct node{

	int data;
	struct node *next;
}NODE, *PNODE;

class Queue{    //Singly Linear Linked List

private:
	PNODE first;
	int size;

public:

    Queue(){

	    first = NULL;
        size = 0;
   }

   void Enqueue(int no){ //InsertLast()

   }

   int Dequeue(){   //DeleteFirst()

   }

   void Display(){

   }

   int Count(){

   	   return size;
   }
};

int main(){

	Queue obj;

	obj.Enqueue(11);
	obj.Enqueue(21);
	obj.Enqueue(21);
	obj.Enqueue(21);

	int iRet = obj.Dequeue();
	cout<<iRet;
}
