#include <iostream>
#include <string>
#include <sstream>

//example 1

/* struct movies_t
{
    std::string title;
    int year;
} mine, yours;

void printmovie(movies_t movie);

int main()
{
    std::string mystr;

    mine.title = "2001 A Space Oddyssey";
    mine.year = 1968;

    std::cout << "Enter title: ";
    getline (std::cin,yours.title);
    std::cout << "Enter year: ";
    getline (std::cin,mystr);
    std::stringstream(mystr) >> yours.year;

    std::cout << "My favorite movie is:\n";
    printmovie (mine);
    std::cout << "And yours is:\n";
    printmovie (yours);
    return 0;
}

void printmovie (movies_t movie)
{
    std::cout << movie.title;
    std::cout << " (" << movie.year << ")\n";
} */

// example 2 (arrays)
struct movies_t
{
    std::string title;
    int year;
} films [3];

void printmovie (movies_t movie);

int main()
{
    std::string mystr;
    int n;

    for (n=0;n<3;n++){
        std::cout << "Enter title: ";
        getline(std::cin,films[n].title);
        std::cout << "Enter year: ";
        getline(std::cin,mystr);
        std::stringstream(mystr) >> films[n].year;
    }

    std::cout << "\nYou have entered these movies:\n";
    for (n=0;n<3;n++)
        printmovie (films[n]);
    return 0;
}

void printmovie (movies_t movie)
{
    std::cout << movie.title;
    std::cout << " (" << movie.year << ")\n";
}

