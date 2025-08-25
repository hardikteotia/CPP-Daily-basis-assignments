/*3. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */


#include <iostream>
using namespace std;

class Book{
    private: 
            string bname;
            int id;
            string author;
            float price;
    public:
            //constructors

            Book(){
                cout<<"\n++++++++In default constructor++++++++\n";
                bname="noBookName";
                id=0;
                author="noAuthor";
                price=0.00;
            }

            Book(string bname, int id, string author, float price){
                cout<<"\n++++++++In parameterised constructor++++++++\n";
                this->bname=bname;
                this->id=id;
                this->author=author;
                this->price=price;
            }

            //setters declaration
            void set_bname(string bname);
            void set_id(int id);
            void set_author(string author);
            void set_price(float price);

            //getters declaration
            string get_bname();
            int get_id();
            string get_author();
            float get_price();

            //display function
            void display(){
                cout<<"\nBook name: "<<bname<<"\nBook id: "<<id<<"\nBook author: "<<author<<"\nBook price: "<<price<<"\n";
            }
};


//setters definition
void Book::set_bname(string bname){
    this->bname=bname;
}
void Book::set_id(int id){
    this->id=id;
}
void Book::set_author(string author){
    this->author=author;
}
void Book::set_price(float price){
    this->price=price;
}

//getters definition
string Book:: get_bname(){
    return bname;
}
int Book:: get_id(){
    return id;
}
string Book:: get_author(){
    return author;
}
float Book:: get_price(){
    return price;
}


int main() {
    
    Book B1;

    B1.set_bname("Atomic habits");
    B1.set_id(100);
    B1.set_author("James Clear");
    B1.set_price(200.50);

    string bookName=B1.get_bname();
    int bookId=B1.get_id();
    string bookAuthorName=B1.get_author();
    float bookPrice=B1.get_price();

    B1.display();
    
    Book B2("The four agreements", 200, "Amber Allen", 500.45);
    B2.display();
    return 0;
}