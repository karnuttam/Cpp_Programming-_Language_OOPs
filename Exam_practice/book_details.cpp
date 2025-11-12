#include <iostream>
//using namespace std;
class Book{
    public:
    std::string title;
    std::string author;
    static int total_book;
/*
   void getBook(std::string title, std::string author){
        this -> title = title;
        this -> author = author;
        total_book++;

    }
        */

        void getBook(){
            std::cout<<"Enter the title of the book: "<<std::endl;
            std::getline(std::cin, title);
            std::cout<<"Enter the author name: "<<std::endl;
            std::getline(std::cin, author);
        }
    void displayBook(){
        std::cout<<"Book Name: "<<title<<std::endl;
        std::cout<<"Author Name: "<<author<<std::endl;
        
    }
    void showStat(){
        std::cout<<"Total number of books: "<<total_book<<std::endl;
    }
};
int Book::total_book = 0;

int main(){
    /*
    std::string title;
    std::string author;
    std::cout<<"Enter the name of book: "<<std::endl;
    std::getline(std::cin, title);
    std::cout<<"Enter the name of author: "<<std::endl;
    std::getline(std::cin, author);

    Book b1;
    b1.getBook(title, author);
    b1.displayBook();
    b1.showStat();

      std::string title2;
    std::string author2;
    std::cout<<"Enter the name of book: "<<std::endl;
    std::getline(std::cin, title2);
    std::cout<<"Enter the name of author: "<<std::endl;
    std::getline(std::cin, author2);
    Book b2;
    b2.getBook(title2, author2);
    b2.displayBook();
    b2.showStat();
   */
  
   int n;
   std::cout<<"Enter the number of books: "<<std::endl;
 
   std::cin>>n;
     std::cin.ignore();
   Book *books = new Book[n];
//=====================Input Details===============
   for(int i = 0; i < n; i++){
    std::cout<<"Enter the data of Book "<<i+1<<std::endl;
    books[i].getBook();
   }
//=========================Display Details==================
   for (int i = 0; i < n; i++){
    std::cout<<"The details of book"<<i+1<<std::endl;
    books[i].displayBook();
   }
//Deallocate books
   delete[] books;




    return 0;
}