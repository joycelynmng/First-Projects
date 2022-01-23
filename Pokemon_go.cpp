#include <iostream>
using namespace std;

int main()
{

    int type;

    cout << "\n Here are the following types of pokemon:\n\n";
    cout << " 1. Normal, 2. Fire, 3. Water, 4. Grass, 5. Electric, 6. Ice, \n";
    cout << " 7. Fighting, 8. Poison, 9. Ground, 10. Flying, 11. Psychic, 12. Bug, \n";
    cout << " 13. Rock, 14. Ghost, 15. Dragon, 16. Dark, 17. Steel, 18. Fairy \n\n";

    cout << "Enter the number for the pokemon type you are fighting: ";
    cin >> type;

    if (type == 1)
    {
        cout << "Use Fighting type\n";
    }
    else if (type == 2)
    {
        cout << "Use Ground, Rock, or Water type\n";
    }
    else if (type == 3)
    {
        cout << "Use Grass or Electric type\n";
    }
    else if (type == 4)
    {
        cout << "Use Flying, Poison, Bug, Fire, or Ice type\n";
    }
    else if (type == 5)
    {
        cout << "Use Ground type\n";
    }
    else if (type == 6)
    {
        cout << "Use Fighting, Rock, Steel or Fire type\n";
    }
    else if (type == 7)
    {
        cout << "Use Flying, Psychic, or Fairy type\n";
    }
    else if (type == 8)
    {
        cout << "Use Ground or Psychic type\n";
    }
    else if (type == 9)
    {
        cout << "Use Water, Grass, or Ice type\n";
    }
    else if (type == 10)
    {
        cout << "Use Rock, Electric, or Ice type\n";
    }
    else if (type == 11)
    {
        cout << "Use Bug, Ghost, or Dark type\n";
    }
    else if (type == 12)
    {
        cout << "Use Flying, Rock, or Fire type\n";
    }
    else if (type == 13)
    {
        cout << "Use Fighting, Ground, Steel, Water, or Grass type\n";
    }
    else if (type == 14)
    {
        cout << "Use Ghost or Dark type\n";
    }
    else if (type == 15)
    {
        cout << "Use Ice, Dragon, and Fairy type\n";
    }
    else if (type == 16)
    {
        cout << "Use Fighting, Bug, or Fairy type\n";
    }
    else if (type == 17)
    {
        cout << "Use Fighting, Ground, or Fire type\n";
    }
    else if (type == 18)
    {
        cout << "Use Poison or Steel type\n";
    }
    else
    {
        cout << "Choose a number between from 1-18 to pick your type\n";
    }

    return 0;
}