#include <stdio.h>
#include <stdlib.h>

int main()
{

    typedef struct Contact{

        char name[30];
        char phone_n[15];
        int age;

    } Contact;

    int N;

    printf("Enter the number of contacts you want:");

    scanf("%d",&N);
    getchar();

    Contact* ptr = malloc(N*sizeof(Contact));

    for( int i=0; i<N; ++i){

        printf("enter your contact%d name:",i);
        fgets(ptr[i].name,30,stdin);

        printf("enter your contact%d phone number:",i);
        fgets(ptr[i].phone_n,15,stdin);

        printf("enter your contact%d age:",i);
        scanf("%d",&ptr[i].age);
        getchar();
    }

    printf("\nYour contacts are:\n");

    for( int i=0; i<N; ++i){

        printf("Contact%d:\n",i);

        printf("name:%s\n",ptr[i].name);

        printf("phone number:%s\n",ptr[i].phone_n);

        printf("age:%d\n",ptr[i].age);
    }

    return 0;
}
