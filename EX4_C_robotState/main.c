#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef enum
    {
    TurnedOFF,
    STOPPED,
    MOVING_F,
    MOVING_B,
    TURNING_L,
    TURNING_R
    }State;

    typedef struct
    {
        int battery;
        State state;
    }Robot;

    void change_state(Robot* r_ptr)
    {
        int state;

        printf("Enter your robot's new state:\n(remember:\n1: STOPPED,\n2:MOVING_F,\n3:MOVING_B,\n4:TURNING_L,\n5:TURNING_R\n");

        scanf("%d",&state);

        getchar();

        //if(r_ptr->state!=0)
        //{
              switch (state)
            {
            case 1:
                r_ptr ->state=STOPPED;
                printf("robot state successfully promoted to %d\n",r_ptr->state);
                break;

            case  2:
                r_ptr ->state=MOVING_F;
                printf("robot state successfully promoted to %d\n",r_ptr->state);
                break;

            case 3:
                r_ptr ->state=MOVING_B;
                printf("robot state successfully promoted to %d\n",r_ptr->state);
                break;

            case 4:
                r_ptr ->state=TURNING_L;
                printf("robot state successfully promoted to %d\n",r_ptr->state);
                break;

            case 5:
                r_ptr ->state=TURNING_R;
                printf("robot state successfully promoted to %d\n",r_ptr->state);
                break;
            default:
                printf("robot state successfully promoted to %d\n",r_ptr->state);
            }
        //}

    }

    int robotState_input_change(Robot *r_ptr)
    {
        DWORD time = GetTickCount();


       int battery=100;

        while(battery > 0)
        {


            DWORD time1 =GetTickCount();

            if(time1-time>=1000)
            {
                time=time1;

                battery-=10;

                change_state(r_ptr);

                r_ptr -> battery=battery;

                if(battery<20)
                {

                    printf("your battery level is low - please recharge.\n");
                }

            }


        }

        return 0;


    }



int main()
{


    //robot initialization


    Robot robot={.battery=100,.state=STOPPED};

    robotState_input_change(&robot);

    printf("robot turned off");

    robot.state=TurnedOFF;




    return 0;
}
