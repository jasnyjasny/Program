#include <iostream>
#include <conio.h.>
main()

{

    using namespace std;

    cout << "Testowy program " << std::endl;
    int x = 10;
    int y = 10;
    char z = 0;
    int i = 0;
    while (1)
    {
        //sterowanie
        z = getch();
        if (z == 'D')
        {
            x++;
        }
        else if (z == 'A')
        {
            x--;
        }
        else if (z == 'W')
        {
            y--;
        }
        else if (z == 'S')
        {
            y++;
        }
        system("cls");
        //prezentowanie        
        
        i=0;
        while (i < y)
        {
            i++;
            cout << '\n';
        }
        i = 0;
        while (i < x)
        {
            i++;
            cout <<"  ";
        }    
        cout <<"*";
        

    }
}


