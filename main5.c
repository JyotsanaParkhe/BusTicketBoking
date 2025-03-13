#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

    void deletebus(int index)
    {
        printf("\n Delete Existing  %d bus Details\n", index+1);
        b2[index].bus_id = 0;
        b2[index].bus_name[0] = '\0';
        b2[index].source[0] = '\0'; 
        b2[index].destination[0] = '\0';
      }  //null character to indicate empty string
      
      struct Bus bus1 ;     
int main()
{
    int result =765;
    int marks=89;
    int *ptrResult=&result;
    printf("value of result%d\n",result); //765
    printf("value of *ptrResult: %d\n",*ptrResult);//765

    printf("value of ptrResult: %d\n",ptrResult); //100
    printf("Adress of result: %d\n",&result);//1004

    char ch='c';
    char *ptrCh=&ch;
    printf("value of ch: %c\n",ch); // c
    printf("value of *ptrch: %c\n",*ptrCh); //c
    printf("value of ptrCh: %d\n",ptrCh);//100

    void * ptr=NULL;
    ptr=&result; // implicit typecasting
    printf("\n value of *ptr: %d\n",*(int *)ptr); //765

    ptr=&ch; //implicit typecasting
    printf("\n value of *ptr: %c\n",*(char *)ptr);//c

    int * ptrNewPointer=(int *)ptr;
    printf("\n value of *ptrnewPointer: %c\n", *ptrNewPointer);// c


// dynamic memory allocation
int * ptrStockAvailable=NULL;
ptrStockAvailable=(int *)malloc(sizeof(int));
*ptrStockAvailable=100;

int byteInt=sizeof(int);
int byteFloat=sizeof(float);
int byteChar=sizeof(char);
int bytesBusStruct=sizeof(bus1);

printf("size of int: %d\n",byteInt);
printf("size of float: %d\n",byteFloat);
printf("size of char: %d\n",byteChar);
printf("size of struct Bus bus1: %d\n",bytesBusStruct);



strcpy(bus1.bus_name,"citylink");
bus1.bus_id=101;
strcpy(bus1.source,"pune");
strcpy(bus1.destination,"kalyan");
strcpy(bus1.bus_name,"citylink");



//struct Student * ptrStudent=NULL;
struct Bus * ptrBus=NULL;

ptrBus=(struct Bus *)malloc(sizeof(struct Bus));
strcpy(ptrBus->bus_name,"Rajhans");
strcpy(ptrBus->source,"Delhi");
strcpy(ptrBus->destination,"Mumbai");
strcpy(bus1.bus_name,"citylink");

}


