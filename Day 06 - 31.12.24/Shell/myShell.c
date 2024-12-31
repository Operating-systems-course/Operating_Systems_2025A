#include "myShell.h"
#include "myFunctionsShell.h"


int main(int argc, char const *argv[])
{
    
    wllcome();
    getLocation();
    while(1){

        char* input = inputFromUser();
        puts(input);





        free(input);
        
    }




    return 0;
}
void welcome(){

    
}