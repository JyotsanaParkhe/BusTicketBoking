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
    //Entry Point Function
    int main()
    {
        acceptAll();
        showAll();
    
        int index;
        printf("Enter index to show details: ");
        scanf("%d", &index);
       
        show(index);
        update(index);
        showAll();
        return 0;
    }
