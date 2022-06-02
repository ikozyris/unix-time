#include <ctime> //for time_t
#include <iostream>
#include <unistd.h> //for sleep()

using namespace std;

int main()
{
   cout << "\033[2J\033[1;1H"; //clear screen escape code
    printf("Created by ikozyris.  @ikozyris on Github and Gitlab. This is a simple program that prints the current timestamp since the Unix Epoch. Also, it will start now!\n");
    sleep(7);

    while (1)
    {
    time_t result = time(nullptr); //time_t sets result to unix time
    cout << asctime(localtime(&result))
              << result << " seconds since the Unix Epoch\n";
    sleep(1);
    cout << "\033[2J\033[1;1H";
    }

}
