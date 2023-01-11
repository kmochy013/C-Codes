#include<stdio.h>
#include<stdlib.h>

int n, pos, elem;
int arr[50];

void create();
void display();
void insert();
void delete();

int main()
{
	int ch;
	
	do
	{
		printf("\n\n******MENU******\n");
		printf("1. Create an array\n");
		printf("2. Display array\n");
		printf("3. Insert an element\n");
		printf("4. Delete an element\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1:	create();
					break;
			case 2:	display();
					break;
			case 3:	insert();
					break;
			case 4:	delete();
					break;
			case 5:	exit(0);
					break;
			default:	printf("\nInvalid Choice\n");
						break;
		}
	}while(ch != 5);
	
	return 0;
}

void create()
{
	int i;
	
	printf("Enter the size of the array: ");
	scanf("%d", &n);
   if( n==0){
      printf("\n Enter valid array size");
      return ;
   }
	printf("\nEnter %d elements of the array: ", n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("\nArray created successfully\n");
}




void insert()
{
	int i;
	
	printf("\nEnter the position to insert the element: ");
	scanf("%d", &pos);
	
	if(pos < 0 || pos > n)
	{
		printf("\nInvalid position\n");
		return;
	}
	
	printf("\nEnter the element to be inserted: ");
	scanf("%d", &elem);
	
	for(i=n-1; i>=pos; i--)
	{
		arr[i+1] = arr[i];
	}
	
	arr[pos] = elem;
	n++;
	
	printf("\nElement inserted successfully\n");
}

void delete()
{
	int i;
	
	printf("\nEnter the position to delete the element: ");
	scanf("%d", &pos);
	
	if(pos<0 || pos>=n)
	{
		printf("\nInvalid position\n");
		return;
	}
	
	elem = arr[pos];
	
	for(i=pos; i<n-1; i++)
	{
		arr[i] = arr[i+1];
	}
	
	n--;
	
	printf("\nElement %d deleted successfully\n", elem);
}