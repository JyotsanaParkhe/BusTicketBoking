#include<stdio.h>
#define MAX 50

struct Bus
    {
    int bus_id;
    char bus_name[MAX];
    char source[MAX];
    char destination[MAX];
    int total_seat=50;
    int availableSeats;
    };
    struct Bus b1; //global variable of structure bus

      //accepts the input from user
    void acceptinput()
    {
        printf(" enter bus_id  ");
        scanf("%d",&b1.bus_id);
        printf(" enter bus_name  ");
        scanf("%s",b1.bus_name);
        printf(" enter source  ");
        scanf("%s",b1.source);
        printf(" enter destination ");
        scanf("%s",b1.destination);
        printf(" enter total_seat ");
        //scanf("%d",&b1.total_seat);
       // printf(" enter availableSeats ");
       // scanf("%d",&b1.availableSeats);
    }
     // display the output
    void displayoutput()
    {
        printf("bus_id: %d\n",b1.bus_id);
        printf("bus_name: %s\n",b1.bus_name);
        printf("source: %s\n",b1.source);
        printf("destination: %s\n",b1.destination);
        printf("totalseat: %d\n",b1.total_seat);
        //printf("availableSeats: %d\n",b1.availableSeats);
    }

int main()
{
    acceptinput(); // function calling
    displayoutput(); // function calling
    return 0;
    
}