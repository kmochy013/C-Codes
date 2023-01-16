#include<stdio.h>
#include<stdlib.h> 

 int n, POS, ELEM;
 int a[100];

void Create(){
     int i;
     printf("\nEnter the size of an Array elements: ");
     scanf("%d",&n);
     if(n == 0){
      printf("\n Array not Created");
      return ;
     }
     printf("\nEnter the elements: ");
     for(i = 0; i < n; i++ ){
        scanf("%d",&a[i]);
     }
     printf("\nArray Created Successfully");
   
   printf("\n");
  }

  void Display(){
     int i;
    if(n == 0){
      printf("\nArray is Empty");
      return ;
    }
   
     printf("\n Displaying the Array Elements: \n");
     for(i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}
  

   void Insert(){
      int i;
      printf("\nEnter the position of the new element: ");
      scanf("%d",&POS);
      if(POS < 0 || POS > n){
         printf("\nEnter valid position");
         return ;
      }

      printf("\nEnter the element: ");
      scanf("%d",&ELEM);

      for(i = n-1; i >= POS; i-- ){
         a[i+1] = a[i];
     }
      a[POS] = ELEM;
      n++;
      
      Display();
   } 

    void Delete(){
       int i;
       printf("\nEnter the position to delete an element: ");
       scanf("%d",&POS);

       for(i = POS - 1; i < n - 1; i++){
         a[i] = a[i + 1];
       }
       n = n - 1;
       Display();
    }

    void Exit(){
      printf("Program End");
    }

  int main(){
     int choice;

     do{
     printf("\n ~ ~ ~ Showing the MENU ~ ~ ~ \n");
     printf(" 1. Creating an array of N Elements\n");
     printf(" 2. Display of Array elements with suitable headings\n");
     printf(" 3. Insertng an element(ELEM) at a given position(POS)\n");
     printf(" 4. Deleting an element at a given valid position\n");
     printf(" 5. Exit\n");
     
     printf("Enter your Choice: ");
     scanf("%d", &choice );

  switch(choice){
    case 1: Create();
      break;
    case 2: Display();
      break;
      case 3: Insert();
      break;
    case 4: Delete();
      break;
    case 5: Exit(1);
      break;
    default:
    printf("Enter the valid choice");          
     break;
      }
     } while(choice !=5);
      return 0;
  } 

  
