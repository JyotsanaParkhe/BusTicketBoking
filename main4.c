#include<stdio.h>

#define MAX 50
#define SIZE 3

struct Bus
    {
    int bus_id;
    char bus_name[MAX];
    char source[MAX];
    char destination[MAX];
    //int total_seat=50;
    int availableSeats;
    };

    struct Bus b1;
    struct Bus b2[SIZE];
    
//CRUD operations
void acceptAll()
{
    for(int i = 0; i < SIZE-1; i++)
    {
        printf("enter all details",i+1);
        printf(" enter bus_id  ");
        scanf("%d",&b2[i].bus_id);
        printf(" enter bus_name  ");
        scanf("%s",b2[i].bus_name);
        printf(" enter source  ");
        scanf("%s",b2[i].source);
        printf(" enter destination ");
        scanf("%s",b2[i].destination);
    }
}
    void showAll()
    {
        for(int i=0;i<SIZE-1;i++)
        {
        printf("bus_id: %d\n",b2[i].bus_id);
        printf("bus_name: %s\n",b2[i].bus_name);
        printf("source: %s\n",b2[i].source);
        printf("destination: %s\n",b2[i].destination);
    
         }
    }
    void show(int index)
    {
        printf("bus_id: %d\n",b2[index].bus_id);
        printf("bus_name: %s\n",b2[index].bus_name);
        printf("source: %s\n",b2[index].source);
        printf("destination: %s\n",b2[index].destination);
    }
    void update(int index)
    {
    printf("udate exixting all details %d",index+1);
    printf(" enter bus_id  ");
    scanf("%d",&b2[index].bus_id);
        printf(" enter bus_name  ");
        scanf("%s",b2[index].bus_name);
        printf(" enter source  ");
        scanf("%s",b2[index].source);
        printf(" enter destination ");
        scanf("%s",b2[index].destination);

    }

    void delete(int index){
        printf("\n Delete Existing  %d bus Details\n", index+1);
        b2[index].bus_id = 0;
        b2[index].bus_name[0] = '\0';
        b2[index].source[0] = '\0'; 
        b2[index].destination[0] = '\0';  //null character to indicate empty string
    //Entry Point Function
    int main()
     {
        int choice;
        while (1) {
            printf("\nBus booking sysytemm\n");
            printf("=======================================\n");
            printf("1. View available buses\n");
            printf("2. Book Tickets\n");
            printf("3. Cancel Tickets \n");
            printf("4. View Bookings \n");
            printf("5. Exit\n");
            printf("Enter your choice (1-5): ");
            scanf("%d", &choice);
    
            switch (choice) {
                case 1: acceptAll(); break;
                case 2: showAll(); break;
                case 3: update(2); break;
                case 4: delete(3); break;
                // case 4: delete(1); break; 
                case 5: return 0;
                default: printf("Invalid choice. Try again.\n");
            }
        }
        return 0;
    }
