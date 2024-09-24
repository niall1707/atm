/*
program to enable bank customers to manage their
Personal Identification Number on an Automated Teller Machine

Niall Heeney
TU857
C22410136
10/11/2022
*/

#include <stdio.h>
int main()
{
    //vairables
    int pin = 1234;
    int input = 0;
    int new_pin = 0;
    int new_pin2 = 0;
    int pin_entered = 0;
    int pin_entered2 = 0;
    int counter = 0;
    int counter2 = 0;

    do
    {
        //main menu user sees
        printf("\n(1): Enter PIN \n");
        printf("(2): Change PIN\n");
        printf("(3): number of pin entries\n");
        printf("(4): Exit program\n\n");

        //asking user to input a number to select operation that dictates what operation will be carried out
        printf("please select an operation: ");
        scanf("%d", &input);

        //stops users from inputting charaters as an input if they do menue will display again
        if ( getchar() == '\n')
        {

        /*if user inputs 1 this code will exciut verifying their pin  is correct*/
            if (input == 1)
            {
                //asks and scans for the user to input their pin
                printf("please enter your PIN ");
                scanf("%04d", &pin_entered);

                //if pin is correct exciute
                if(pin_entered == pin)
                {
                    printf("\nyou have entered the correct pin\n\n");
                    counter = counter + 1;
                    input = 0;
                }
                //if pin entered is not correct exciute
                else
                {
                    printf("\nthat is not the correct pin please try again\n");
                    counter2 = counter2 + 1;
                    input = 0;
                }

            }
            //if input 2 is entered exciute allowing pin to be changed after current pin is verified
            if (input == 2)
            {
                //asking user to input current pin
                printf("\nplease enter your current pin: ");
                scanf("%04d",&pin_entered2);

                //if pin ented is correct exciute
                if(pin_entered2 == pin)
                {
                    //enter new pin for first time
                    printf("Please enter your new pin: ");
                    scanf("%04d", &new_pin);

                    //enter new pin for secon time
                    printf("plesae re-enter your new pin: ");
                    scanf("%04d", &new_pin2);
                    counter = counter + 1;

                }
                //if both new pin entries match exciute changing the value of the orignal pin
                if(new_pin == new_pin2)
                {
                    printf("\nyour new pin is set!\n");

                    (pin = new_pin);
                    input = 0;

                }
                // if both new pin entires do not match exciute
                else
                {
                    printf("\nthat is not the correct please try again\n ");
                    input = 0;
                    counter2 = counter2 + 1;
                }
            }
        }
        /*if input 3 is entered exciute displaying number of pin entires
        both correct and incorect*/
        if(input ==3)
        {
            printf("\nnumber of incorect pin entries %d\n", counter2);
            printf("number of correct pin entries %d\n", counter);
            input = 0;
        }
    }while(input <= 0 || input > 5);

       //if input 4 is entered exciute ending the code
        if(input ==4)
        {
            printf("Goodbye ");

        }
    return 0;

}