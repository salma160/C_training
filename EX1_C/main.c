#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    printf("Enter an input(integer-number of your array's elements:");

    scanf("%d",&N);

    if (N > 0){
        long sum=0;

        double average;

        int* ptr = malloc(N*sizeof(int));

        if(ptr==NULL){
            printf("No memory allocated. Not enough space.");
        }
        else{

            for(int i=0; i<N; ++i){
                scanf("%d",ptr+i);
                sum += *(ptr + i);
                                }
            int max = *(ptr);
            int min = *(ptr);

            for( int i=1; i<N ; ++i){

                if(*(ptr +i)>max){

                    max = *(ptr+i);
                }

                if(*(ptr +i)< min){

                    min = *(ptr+i);
                }
                                    }

            double average = (double)sum / N;
            printf("here is the average: %.3lf , the max: %d, the min: %d, the sum : %ld", average,max,min,sum);

            free(ptr);
            }


    }else{
            printf("The number of elements musst be > 0");
        }


    return 0;
}
