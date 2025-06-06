#include <iostream>
#include "Author.h"

int main()
{
    Author a1("Jane", "Austen");
    Author a2("Mark", "Twain", 1835, 1910, "American");

    std::cout << "Author 1: " << a1.getAuthorInfo() << std::endl;
    std::cout << "Author 2: " << a2.getAuthorInfo() << std::endl;

    return 0;
}

