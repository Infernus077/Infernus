#include <iostream>
#include <ctime>
using namespace std;
 
int main(int argc, char* argv[])
{
    srand( time( 0 ) );
    int unknown_number = 1 + rand() % 10; 
    int enter_number; 
    cout << "Enter unknown number [1:10] : "; 
    cin >> enter_number;
    while ( enter_number != unknown_number  )
    {
     cout << "Enter unknown number [1:10] : ";
     cin >> enter_number; 
    }
    cout << "You win!!!\n";
    system("pause");
    return 0;
}


