#include<stdio.h>
# define size 100
struct bus
{
int bus_id;
char busname[20];
char source[20];
char destination[20];
};

struct bus b1[size];

void acceptinput()
{
	int i;
	int totalseat=100;
	for(i=0;i<size;i++)
	{
	printf("\nEnter bus id\t");
	scanf("%d",&b1[i].bus_id);
	printf("Enter busname\t");
	scanf("%s",&b1[i].busname);
	printf("Enter source\t");
	scanf("%s",&b1[i].source);
	printf("Enter destination\t");
	scanf("%s",&b1[i].destination);
	
	if(i<totalseat){
		printf("\nSeats are available: %d...Continue booking\n",totalseat-(i+1));
	}
	else{
		printf("Seats are Not Available");
	}
	
	//printf("Enter totalseat");
	//scanf("%d",&b1.totalseat);
}
}

void dispalyoutput()
{
	int i;
	for(i=0;i<size;i++)
	{
	printf("bus id is:%d\n",b1[i].bus_id);
	printf("busname is:%s\n",b1[i].busname);
	printf("bus source is:%s\n",b1[i].source);
	printf("bus desination is:%s\n",b1[i].destination);
	}
}

void show(int index)
{
	printf("BUs id is:\t\n",b1[index].bus_id);
	printf("Busname is:\t\n",b1[index].busname);
	printf("source is:\t\n",b1[index].source);
	printf("destination is:\t\n",b1[index].destination);
}

void update(int index)
    {
    printf(" enter bus_id  ");
    scanf("%d",&b1[index].bus_id);
    printf(" enter bus_name  ");
    scanf("%s",&b1[index].busname);
    printf(" enter source  ");
    scanf("%s",&b1[index].source);
    printf(" enter destination ");
    scanf("%s",&b1[index].destination);
}

/*void delete(int index)
	{
        b1[index].bus_id = 0;
        b1[index].busname[0] = '\0';
        b1[index].source[0] = '\0'; 
        b1[index].destination[0] = '\0';
    }
*/
int main()
{
	    
    int choice;
        while (1) 
		{
            printf("\nBus booking sysytemm\n");
            printf("=======================================\n");
            printf("1. Acceptinput\n");
            printf("2. Dispalyoutput\n");
            printf("3.Show \n");
            printf("4. Update \n");
            printf("5. Delete\n");
            
            printf("Enter your choice (1-6): ");
            scanf("%d", &choice);
            
            switch (choice) 
			{
                case 1: acceptinput(); break;
                case 2: dispalyoutput(); break;
                case 3: show(1); break;
                case 4: update(2); break;
                //case 5: delete(1); break; 
                case 5: return 0;
                default: printf("Invalid choice. Try again.\n");
    
	return 0;
			}
		}
}
