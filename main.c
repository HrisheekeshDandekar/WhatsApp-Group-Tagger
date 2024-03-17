#include <stdio.h>
#include <windows.h>
#include "cli_welcome.h"
#include "keyboard_simulator.h"

int get_total_members()
{
    int tot_members = 0;
    while (tot_members < 2)
    {
        printf("Enter number of users in the group (Excluding you!): ");
        scanf("%d", &tot_members);

        if (tot_members < 2)
        {
            printf("\033[1;33mTotal number of participants should be more than 1!\033[0m\n");
            printf("Try again.....\n\n");
        }
    }
    return tot_members;
}

int main() 
{
    welcome_and_instructions();

    int tot_members = get_total_members();

    printf("[PUT YOUR CURSER ON WHATSAPP WEB GROUP CHAT , KEEP THE WINDOW ACTIVE!]");

    Sleep(7000);

    for (int i = 0; i < tot_members; i++) 
    {
        pressAndHoldKey(VK_SHIFT);
        pressKey(TWO);
        releaseKey(VK_SHIFT);

        for (int b = 0; b < i; b++) 
        {
            pressKey(VK_DOWN);
        }
        pressKey(VK_RETURN);
    }

    return 0;
}

