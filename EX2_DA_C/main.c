#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int capacity =2;

    bool var = true;

    int* ptr = malloc(capacity*sizeof(int));

    int g = 0;

    int i;

    while(var){

        for( i=g; i<capacity; ++i){

            scanf("%d",ptr+i);

            if(*(ptr+i)== -1){

                var= false;

                break;
                             }


                                    }

        if(var!=false){

          capacity*=2;

          ptr=realloc(ptr,capacity*sizeof(int));

                      }
        g=i;//on utilise g=i pour l'affichage du DA(Dynamic array).
            //g=i et non pas g=i+1 car à la sortie de la boucle for i== capacity


    }

    printf("You have entered :");

    for(int j=0; j<g;++j){ // l'affichage du DA avant le -1

            printf("\n%d",ptr[j]);

    }


    return 0;
}
