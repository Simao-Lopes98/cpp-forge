#include <iostream>

using namespace std;

class Book {
    private:
        int year;
        string title;
        string author;
    public:
        
        Book (int yearToSet, string titleToSet, string authorToSet)
            {
                year = yearToSet;
                title = titleToSet;
                author = authorToSet;
            }
        Book ()
            {
                year = 9999;
                title = "Unknown";
                author = "Unknown";
            }

        void printAttr (void)
            {
                printf ("%s, %s, %d\n", title.c_str(), author.c_str(), year);
            }

};


int main ()
{
    Book bookDefault;
    Book bookMatilda (1988, "Matilda", "Roal Dahl");
    Book bookTree (1964, "The Giving Tree", "Shel Silverstein");

    bookDefault.printAttr();
    bookMatilda.printAttr();
    bookTree.printAttr();

    return 0;
}