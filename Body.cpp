#include "Body.h"
#include <iostream>
#include <vector>
#include <algorithm> // Legit to run the algo, no joke.
#include <Windows.h> // For messing with colors.

void show(std::vector<char> const& input)
{
    for (auto const& i : input) {
        std::cout << i << " ";
    }
}

void Body::fyshuffle() // Fisher-Yates shuffle on character vector representing notes/keys.
{
    std::vector<char> v = {'C','D','E','F','G','A','H','c','d','e','f','g', 'a','1','2','3','4','5','6','7'};
    int size = v.size();
    for (int i = 0; i < size - 1; i++) {
        int j = i + rand() % (size - i);
        std::swap(v[i], v[j]);
    }
    std::cout << "Elements after getting shuffled" << std::endl;
    show(v);

    Body::main(); // Does get cluttered after a while since there is no 'clear'. 
}

void Body::main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 1);
    std::cout << "Feeling uninspired? \n";
    std::cout << "Feeling dry? \n";
    std::cout << "Feeling like you've never touched an instrument before? \n";
    std::cout << "Feeling constipated even though it has nothing to do with music? \n" << std::endl;
    SetConsoleTextAttribute(h, 4);
    std::cout << "8===============================================D \n";
    SetConsoleTextAttribute(h, 3);
    std::cout << "Remember, the notes be like C, D, E, F, G, A, H. \n";
    std::cout << "H in Europe is B in US. B in Europe is diminished H. \n";
    std::cout << "If you get a CAPITAL letter it's major. \n";
    std::cout << "If you get a lower-case letter it's minor. \n";
    std::cout << "If you get a number, go up half a step on that one, like: 1 = C# or c#. \n";
    std::cout << "There's only half a step between E-F and H-C. So E# is pretty much F. \n" << std::endl;
    SetConsoleTextAttribute(h, 4);
    std::cout << "8===============================================D \n" << std::endl;
    SetConsoleTextAttribute(h, 8);
    std::cout << "1. Wanna shuffle some chords? \n";
    std::cout << "2. Or exit the app. That's probably a better choice. \n" << std::endl;

    int selection{ 0 };
    std::cin >> selection;

    switch (selection)
    {
    case 1:
        Body::fyshuffle();
        break;
    case 2:
        EXIT_SUCCESS;
        break;
    default:
        std::cout << "You literally had only two options to work with. \n";
        break;
    };
}
