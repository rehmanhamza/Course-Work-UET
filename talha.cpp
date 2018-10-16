#include <iostream>
#include <conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;
void delay(unsigned int mseconds);
struct loc
{
    int x;
    int y;
};

int main()
{
    int l=0,foodx,foody,sizee=1;

    srand(time(NULL));

    foodx=rand()%29+1;
    foody=rand()%19+1;

    foodx=10;
    foody=17;
    loc snake;
    snake.x=10;
    snake.y=10;

while(l!=20)
   {
    for(int x=1;x<=20;x++)
    {
        for(int y=1;y<=30;y++)
        {
            if(x==1 || x==20 || y==1 || y==30)
            {
                cout<<'*';
            }
            else if(x==snake.x && y>=snake.y && y<snake.y+sizee)
            {

                {cout<<'#';}
            }
            else if(x==foodx && y==foody)
            {
                cout<<'@';
            }
            else
            {
                cout<<" ";
            }

        }

        cout<<endl;
    }
    if(snake.x==foodx && snake.y==foody)
    {
        sizee++;
        foodx=rand()%29+1;
        foody=rand()%19+1;
    }

    snake.y++;
    l++;

    delay(300);
    system ("cls");
    }

    return 0;
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
