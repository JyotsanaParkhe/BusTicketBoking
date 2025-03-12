#include<stdio.h>

#define MAX 50
#define SIZE 10
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
void acceptinput()
    {
        for(int i=0;i<SIZE-1;i++)
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
        //printf(" enter total_seat ");
        //scanf("%d",&b1.total_seat);
       // printf(" enter availableSeats ");
       // scanf("%d",&b1.availableSeats);
        }
    }
void displayoutput()
    {
        for(int i=0;i<SIZE-1;i++)
        {
        printf("bus_id: %d\n",b2[i].bus_id);
        printf("bus_name: %s\n",b2[i].bus_name);
        printf("source: %s\n",b2[i].source);
        printf("destination: %s\n",b2[i].destination);
        //printf("totalseat: %d\n",b2[i].total_seat);
        //printf("availableSeats: %d\n",b1.availableSeats);
    }
}




int main()
{
    acceptinput(); // function calling
    displayoutput(); // function calling
    return 0;
    
}