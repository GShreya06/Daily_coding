#include<iostream>

using namespace std;

template <class T>
class singlyLinkedList
{
	public:
		struct node
		{
			T data;
			struct node *next;
		};
		struct node *head=NULL, *newNode, *temp;
		int ch;
		bool emp;

		~singlyLinkedList();

		void options();
		int choice();
		void choiceCalling(int);

		void create();
		void insert_at_beginning();
		void display();
		void insert_at_location();
		void delete_at_end();
		struct node *search_in_list();
		void operator +(singlyLinkedList);

		int countList();
		bool emptyListChecker();
};

template <class T>
singlyLinkedList<T>::~singlyLinkedList()
{
	struct node *temp1;
	temp = head;
	while(temp != NULL)
	{
		temp1 = temp -> next;
		delete(temp);
		temp = temp1;
	}
}

template <class T>
void singlyLinkedList<T>::insert_at_beginning()
{
	cout << "\n------------ INSERTING AT BEGINNING ------------\n";
	emp = emptyListChecker();
	if(emp != true)
		return;
	else
	{
		newNode = (struct node *)new struct node;
		cout << "Enter the new node's data : ";
		cin >> newNode -> data;
		newNode -> next = head;
		head = newNode;
		cout << "\nSuccessfully inserted the node at beginning\n";
	}
	display();
}

template <class T>
bool singlyLinkedList<T>::emptyListChecker()
{
	if(head == NULL)
	{
		cout << "\n########### The list is empty ###########\n";
		return false;
	}
	return true;
}

template <class T>
int singlyLinkedList<T>::countList()
{
	int count=0;
	temp = head;
	while(temp != NULL)
	{
		temp = temp -> next;
		count ++;
	}
	return count;
}

template <class T>
void singlyLinkedList<T>::options()
{
	cout << "\n1. CREATE"
         <<"\n2.INSERT AT BEGINNING"
		 <<	"\n3. INSERT AT LOCATION"
		 <<	"\n4. DELETE AT END"
		 <<	"\n5. SEARCH IN LIST"
		 <<	"\n6. CONCATENATE TWO SINGLY LINKED LIST"
		 <<"\n7.DISPLAY"
		 <<	"\n0. EXIT";
}

template <class T>
int singlyLinkedList<T>::choice()
{
	cout << "\n\nEnter the number of your choice: ";
	cin >> ch;
	return ch;
}

template <class T>
void singlyLinkedList<T>::choiceCalling(int ch)
{
	switch(ch)
	{
		case 1:
			create();
			break;
        case 2:
            insert_at_beginning();
            break;
		case 3:
			insert_at_location();
			break;
		case 4:
			delete_at_end();
			break;
		case 5:
		{
			node *temp1 = search_in_list();
			if(temp1 != NULL)
				cout << "\nPointer: " << temp1 << endl;
			break;
		}
		case 6:
			break;
        case 7:
            cout << "\n------------ DISPLAYING LIST ------------\n";
			display();
			break;
        case 0:
			break;
		default:
			cout << "\nINVALID CHOICE!!!!\n";
	}
}

template <class T>
void singlyLinkedList<T>::create()
{
	cout << "\n------------ CREATING NEW LIST ------------\n";
	head = NULL;
	char ch;
	do
	{
		newNode = (struct node *)new struct node;
		cout << "Enter the new node's data : ";
		cin >> newNode -> data;
		newNode -> next = NULL;
		if(head == NULL)				//For first node (head)
		{
			head = temp = newNode;
		}
		else						//For rest of the nodes
		{
			temp -> next = newNode;
			temp = newNode;
		}
		cout << "\nDo you want to enter more nodes? y/n: ";
		cin >> ch;
	}while(ch == 'y');
	display();
}

template <class T>
void singlyLinkedList<T>::insert_at_location()
{
	cout << "\n------------ INSERTING AT LOCATION ------------\n";
	emp = emptyListChecker();
	if(emp != true)
		return;
	else
	{
		int loc, i=1, count;
		count = countList();
		while(1)
		{
			cout << "Enter the new node's location: ";
			cin >> loc;
			if(loc > count || loc == 0)
			{
				cout << "\nWRONG LOCATION... \n";
				break;
			}
			if(loc == 1)
			{
				insert_at_beginning();
				break;
			}
			else
			{
				newNode = (struct node *)new struct node;
				cout << "Enter the new node's data : ";
				cin >> newNode -> data;
				temp = head;
				while(i < loc-1)
				{
					temp = temp -> next;
					++i;
				}
				newNode -> next = temp -> next;
				temp -> next = newNode;
				cout << "\nSuccessfully inserted the node at " << loc << endl;
				break;
			}
		}
	}
	display();
}

template <class T>
void singlyLinkedList<T>::delete_at_end()
{
	cout << "\n------------ DELETING AT END ------------\n";
	emp = emptyListChecker();
	if(emp != true)
		return;
	else
	{
		int c = countList();
		temp = head;
		if(c == 1)
		{
			delete(temp);
			head = NULL;
			cout << "\nSuccessfully deleted the node at end\n";
		}
		else
		{
			while(temp -> next -> next != NULL)				//traversing up to second last node
			{
				temp = temp -> next;
			}
			delete(temp -> next);
			temp -> next = NULL;
			cout << "\nSuccessfully deleted the node at end\n";
		}
		display();
	}

}

template <class T>
typename singlyLinkedList<T>::node *singlyLinkedList<T>::search_in_list()
{
	bool flag=false;
	T ele, count=0;
	temp = head;
	cout << "\n------------ SEARCHING IN LIST ------------\n";
	emp = emptyListChecker();
	if(emp != true)
		return temp;
	else
	{
		cout << "Enter the element to be searched: ";
		cin >> ele;
		do
		{
			if(temp -> data == ele)
			{
				flag = true;
				break;
			}
			temp = temp -> next;
			count++;
		}while(temp != NULL);
		if(flag == true)
			cout << endl << ele << " found at position " << count+1 << " in the list";
		else
			cout << endl << ele << " not found in the list\n";
	}
	return temp;
}

template <class T>
void singlyLinkedList<T>::operator + (singlyLinkedList ob1)	//operator overloading
{
	cout << "\n------------ CONCATINATING ANOTHER LIST ------------\n";
	emp = emptyListChecker();
	if(emp != true)
		return;
	else
	{
    struct node *node,
                *temp = head,
                *temp1 = ob1.head;
      while(temp->next != NULL)
        temp = temp->next;
      while (temp1 != NULL)
      {
        node = new struct node();
        node->data = temp1->data;
        node->next = NULL;
        temp->next = node;
        temp = temp->next;
        temp1 = temp1->next;
      }
      display();
	}
}

template <class T>
void singlyLinkedList<T>::display()
{
	emp = emptyListChecker();
	if(emp != true)
		return;
	else
	{
		temp = head;
		cout << endl << "List: ";
		while(temp != NULL)
		{
			cout << temp -> data;
			temp = temp -> next;
			if(temp != NULL)
				cout << " -> ";
		}
		cout << endl;
	}
}

int main()
{
	int choice, ch;
	singlyLinkedList<int> ob, ob1;
	cout << "\n\t~~~~~~SINGLY LINKED LIST ~~~~~~\t\n";
	do
	{
		ob.options();
		choice = ob.choice();
		if(choice == 0)
			break;
		if(choice == 1)
			ob.~singlyLinkedList();
		if(choice == 11)
		{
			ob1.create();
			ob + ob1;
		}
		ob.choiceCalling(choice);
	}while(1);
	cout << "\nEXITING...\n";
	return 0;
}
