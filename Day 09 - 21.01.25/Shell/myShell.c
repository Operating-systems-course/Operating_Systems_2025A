#include "myShell.h"
#include "myFunctionsShell.h"

int main(int argc, char const *argv[])
{

    welcome();
    while (1)
    {
        int isPipe = 2;
        getLocation();

        char *input = inputFromUser();
        // char **arguments = splitArguments(input);
        // char *arguments[] = {"ls", "-l", NULL};
        char *arguments[] = {"ls", "-l", NULL, "grep", "c$", NULL};

        if (strcmp(input, "exit") == 0)
        {
            logout();
        }
        else if (strcmp(input, "cd") == 0)
        {
            puts("Impl");
        }
        else if (strcmp(input, "cp") == 0)
        {
            puts("Impl");
        }
        else if (strcmp(input, "delete") == 0)
        {
            puts("Impl");
        }
        else if (strcmp(input, "dir") == 0)
        {
            puts("Impl");
        }
        else if (isPipe)
        {
            myPipe(arguments,arguments+isPipe+1);
        }
        else
        {
            systemCall(arguments);
            wait(NULL);
        }

        puts(input);
        // free(arguments);
        free(input);
    }

    return 0;
}
void welcome()
{
    char *logo[] = {"                     aRTI//BARK             ____\n",
                    "             simpleSH//////////Shl         |B//S|", "    |\n",
                    "          SH//////YS           shell//Sh   |A@@I|", "    | Welcome to simple shell\n",
                    " Sim aSystemSH//Sh              sys//B     |R$$M|", "    | Version 1.0\n",
                    " ArtABBBaraKk///Sh               sM//E     |A^^P|", "    |\n",
                    "         pCCCCY//h          eSS@@ y//E     |K**L|", "    | https://github.com/BSharabi\n",
                    "         SPPPP///a          pP///AC//E     |&&&E|", "    |\n",
                    "              A//A            smP////S     |A**S|", "    | Have fun!\n",
                    "              p///Ac            sE///a     |R##H|", "    |\n",
                    "              P////YCpc           L//L     |T!!E|", "    | Wanna support simple shell?\n",
                    "       scccccp///pSP///p          p//l     |I%%L|", "    |\n",
                    "      sY/////////y  caa           S//h     |U--L|", "    |\n",
                    "       shsSellH//Ya              pY/Sh     |MIGT|", "    |\n",
                    "        sH/ShS////YCc          aC//Yp      |____|", "    |\n",
                    "         Si  shlll//SHsimpleSH//LSs\n",
                    "                  shell//////IPSHs\n",
                    "                       artium\n", '\0'};
    int i = 0;

    do
    {
        printf("%s", logo[i++]);
        // if (i % 2 != 0 || i > 26)
        //     green();
        // else
        //     blue();
    } while (logo[i]);
    // reset();
    puts("\n");
}