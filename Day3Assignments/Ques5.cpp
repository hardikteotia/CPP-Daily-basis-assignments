/*4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. */

#include <iostream>
using namespace std;

class Point{
    private:
            int x,y;
    public:
            //Constructors
            Point(){
                cout<<"\n++++++++In default constructor++++++++\n";
                x=0;
                y=0;
            }
            Point(int x, int y){
                cout<<"\n++++++++In parameterised constructor++++++++\n";
                this->x=x;
                this->y=y;
            }

            //setters
            void setX(int x){
                this->x=x;
            }
            void setY(int y){
                this->y=y;
            }

            //getters
            int getX(){
                return x;
            }
            int getY(){
                return y;
            }

            //display function
            void display(){
                cout<<"\n Value of X: "<<x<<"\nValue of Y: "<<y<<"\n";
            }
};

int main() {
    Point P1;
    P1.setX(12);
    P1.setY(14);

    int mainX = P1.getX();
    int mainY = P1.getY();

    P1.display();

    Point P2(12,134);
    P2.display();
    return 0;
}