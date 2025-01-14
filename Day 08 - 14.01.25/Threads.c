#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *print_msg(void *msg)
{
    puts(msg);
}

void *client_care(void *msg)
{
    puts(msg);
}



int main(int argc, char const *argv[])
{
    char msg[] = "Hello print_msg from child Thread";
    pthread_t thread = 0;

    if (pthread_create(&thread, NULL, print_msg, (void *)msg) != 0)
    {
        perror("Faild to create thread");
        return 1;
    }

    pthread_join(thread, NULL);

    for (int i = 0; i < 10; i++)
    {
        print_msg("Main Thread is working...");
        printf("(iteration %d)\n", i);
    }




    // for (int i = 0; i < 10; i++)
    // {
    //     print_msg("Main Thread is working...");
    //     printf("(iteration %d)\n", i);
    //     sleep(1);
    // }

    // while (1)
    // {

    //     int client = get_Client();

    //     if (pthread_create(&thread, NULL, client_care, (void *)client) != 0)
    //     {
    //         perror("Faild to create thread");
    //         return 1;
    //     }
    //     sleep(1);
    // }

    return 0;
}
