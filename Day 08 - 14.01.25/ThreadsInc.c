#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int num = 0;

void *inc(void *arg)
{
    for (int i = 0; i < 1000000; i++)
    {
        num++;
    }
}

int main(int argc, char const *argv[])
{
    char msg[] = "Hello print_msg from child Thread";
    pthread_t thread = 0;

    printf("%d\n", num);

    if (pthread_create(&thread, NULL, inc, NULL) != 0)
    {
        perror("Faild to create thread");
        return 1;
    }

    pthread_join(thread, NULL);

    for (int i = 0; i < 1000000; i++)
    {
        num--;
    }


    printf("%d\n", num);


    return 0;
}
