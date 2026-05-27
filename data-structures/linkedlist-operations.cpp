#include <iostream>
#include <stdlib.h>

struct node {
	int a;
	struct node* next;
};

typedef struct node block;

block* create(block* head) {
	int count=0;
	int data;
	int c;
	block *h2,*h3;

	do {
		if(count>0) {

			std::cout<<"\nEnter the data:";
			std::cin>>data;
			h2=(block*)malloc(sizeof (block));
			h2->a= data;
			h2->next=NULL;
			h3->next=h2;
			count++;
			h3=h2;

		}

		else
		{
			std::cout<<"\nEnter the data:";
			std::cin>>data;
			head->a= data;
			head->next=NULL;
			h3=head;
			count++;
		}

		std::cout<<"\nDo you want to continue?";
		std::cin>>c;

	} while(c!=0);

	free(h2);
	free(h3);
	return head;

}

block *insert(block *h, int data) {
	int pos, count=0;
	int choice;
	block *h2, *h3;
	h2 = (block*)malloc(sizeof(block));

	std::cout<<"\n\nINSERTION MENU\n";
	std::cout<<"\nWhere do you want to insert the data?";
	std::cout<<"\nPress 1 to insert the element at the beginning.";
	std::cout<<"\nPress 2 to insert the element at the end.";
	std::cout<<"\nPress 3 to insert the element in the middle.";
	std::cin>>choice;

	switch(choice) {
	case 1:
		h2->a=data;
		h2->next=h;
		h= h2;
		break;
	case 2:
		h2=h;
		h3 = (block*)malloc(sizeof(block));
		while(h2->next!=NULL) //traverse
		{
			h2= h2->next;

		}
		h3->a=data;
		h2->next=h3;
		h3->next= NULL;
		break;
	case 3: //std::cout<<"\nLook at the current list first:";
		//display(h);
		std::cout<<"\nWhich node you will place the new data after?";
		std::cin>>pos;  //we are using the position of the node instead of elements to prevent the ambuigity of duplicacy.
		h2=h;
		h3 = (block*)malloc(sizeof(block));
		while(h2->next!=NULL) //traverse
		{	++count;
			if(pos==count) {
				h3->a=data;
				h3->next= h2->next;
				h2->next= h3;
				break;
			}
			h2= h2->next;

		}

		if(h2->next==NULL) {
			std::cout<<"\nWe dont have number of nodes, there are only"<<count<<"nodes. Maybe check the list again in the main menu and try again.";
		}

		break;
	default:
		std::cout<<"\nWrong choice, go back to the main menu.";

	}

	free(h2);
	free(h3);
	return h;
}

block* delet(block *h) {
	int data;
	int choice;
	block* h2;
	h2=(block*)malloc(sizeof(block));
	block* h3;
	int pos;
	int c;
	int count=0;


	std::cout<<"\n\nDELETION MENU\n";
	std::cout<<"\nWhere do you want to insert the data?";
	std::cout<<"\nPress 1 to delete the element at the beginning.";
	std::cout<<"\nPress 2 to delete the element at the end.";
	std::cout<<"\nPress 3 to delete the element in the middle.";
	std::cin>>choice;

	switch(choice) {
	case 1:
		h=h->next;
		std::cout<<"\nDeleted";
		break;
	case 2:
		h2=h;
		h3 = (block*)malloc(sizeof(block));
		while(h2->next!=NULL) //traverse
		{
			h3=h2;
			h2= h2->next;

		}
		h3->next= NULL;
		free(h2);
		break;
	case 3: //std::cout<<"\nLook at the current list first:";
		//display(h);
		std::cout<<"\nYou can delete nodes in 2 ways:";
		std::cout<<"\nPress 1 to delete by mentioning the position of the node to be deleted- will delete ONE NODE at once";
		std::cout<<"\nPress 2 to delete by mentioning the data to be deleted- will remove the DUPLICATES also if there are";
		std::cin>>c;

		if(c==1) {
			std::cout<<"\nWhich node will you delete?";
			std::cin>>pos;

			h2=h;
			h3 = (block*)malloc(sizeof(block));
			while(h2->next!=NULL) //traverse
			{	++count;
				if(pos==count) {
					h3->next=h2->next;
					break;
				}
				h3=h2;
				h2= h2->next;  //dry run it once

			}

			if(h2->next==NULL) {
				std::cout<<"\nWe dont have that number of nodes, there are only"<<count<<"nodes. Maybe check the list again in the main menu and try again.";
			}


		}

		else if(c==2) {
			std::cout<<"\nWhich data you want to delete (All the duplicates will be deleted as well)?";
			std::cin>>data;
			int count=0;
			h2=h;
			h3 = (block*)malloc(sizeof(block));

			while(h2!=NULL) //traverse
			{
				if(data==h2->a) {
					h3->next=h2->next;
					h2=h2->next;
					count++;
				}
				else {
					h3=h2;
					h2= h2->next;  //dry run it once
				}

			}

			if(count==0) {
				std::cout<<"\nThat data doesn't exist in the list currently. Maybe check the list again in the main menu and try again.";
			}


		}


		break;
	default:
		std::cout<<"\nWrong choice, go back to the main menu.";

	}

	free(h2);
	free(h3);

	return h;

}

int search(block *h, int data) {
	int count=0;
	int flag=0;
	block *h2;
	h2= (block*)malloc(sizeof (block));
	h2=h;
	while(h2!=NULL) //traverse
	{	++count;
		if(h2->a==data) {
			return count;
		}
		h2= h2->next;

	}
	count=0;
	return count;
}

void display(block *head) {
	block *start= head;
	while(start!=NULL) {
		std::cout<<start->a<<"->";
		start=start->next;
	}
	free(start);
}

int main() {

	block *h;
	int choice;
	int data;
	h= (block*)malloc(sizeof (block)); //Dynamic Memory Allocation
	int pos;

	std::cout<<"\nFirst the List will be created by inserting some elements:\n";
	h=create(h);
	std::cout<<"\nNow that the list is created and some elements have been inserted into it,\nEnter the choice for the operation you want to do as per the following menu: ";



	do {
		std::cout<<"\n\n*****MAIN MENU*****";
		std::cout<<"\nPress 1 to Insert more elements into the list";
		std::cout<<"\nPress 2 to delete elements from the list";
		std::cout<<"\nPress 3 to search elements in the list";
		std::cout<<"\nPress 4 to display the elements of the list";
		std::cout<<"\nPress 5 to exit";

		//later on: sorting, concatenation, maximum, frequency

		std::cin>>choice;

		switch(choice)
		{
		case 1:
			std::cout<<"\nEnter the data you want to insert:";    //boundary cases yet to be implemented
			std::cin>>data;
			h=insert(h,data);
			std::cout<<"\nThe data is inserted!";
			break;
		case 2:
			h=delet(h);   //boundary cases yet to be implemented
			break;
		case 3:
			std::cout<<"\nEnter the data you want to search:";
			std::cin>>data;
			pos= search(h, data);
			if(pos==0) {
				std::cout<<"\nSorry the element is not there in the list. Go back to the main menu";
			}
			else {
				std::cout<<"\nThe given element is at postion "<<pos<<" in the list";
			}
			break;
		case 4:
			display(h);
			break;
		case 5:
			exit(0);
			break;
		default:
			std::cout<<"\nWrong choice check the menu again";
		}



	} while(choice!=5);

	return 0;

}
