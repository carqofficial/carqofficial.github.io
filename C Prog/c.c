#include<stdio.h>

enum state {Working = 0 , failed, freezed};
enum state currstate = 0;
enum state findstate()
{
    return currstate;
}

int main()
{

    (findstate() == Working) ? printf("\nworking") : printf("\nNot working");
    return 0;

}

