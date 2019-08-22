#include <iostream>  
#include <string>
#include <ctime>

using namespace std; 

//Menu
int formatMenu();
int designMenu();
bool checkMenu();

// Get/Use Dimensions
int getDimestion();
void determineGrid();

// Draw Grids
void points(int x, int y);
void stars (int x, int y);
void lines (int x, int y);
void boxes (int x, int y);
void UserCustom(int x, int y);

// Global Variables
int gridSizeOpt;
int gridDesignOpt;

int main() 
{  
    checkMenu();
    determineGrid();
    return 0;   
}
    int formatMenu(){
    //Shows this menu and allows the user to choose an option
	   cout << " -------------------------------"   << endl;
	   cout << "    Welcome To GRID GENERATOR! "    << endl;
	   cout << " -------------------------------"   << endl;
     cout << " Select the format of your grid: "  << endl;
     cout << " 1. Create an n by n grid [square]" << endl;
     cout << " 2. Create a x by y grid [rectangle]"<< endl;
     cout << " 3. Create a random grid size "     << endl;
     cout << " Enter your choice:" << endl;
     int choice;
     cin >> choice;

        return choice;
    }
    int designMenu(){
    //Shows this menu and allows the user to choose an option
	   cout << " -------------------------------" << endl;
	   cout << "    Welcome To GRID GENERATOR! " << endl;
	   cout << " -------------------------------" << endl;
     cout << " Select the design of your grid: " << endl;
     cout << " 1. Points [.] " << endl;
     cout << " 2. Stars  [*] " << endl;
     cout << " 3. Lines  [|] " << endl;
     cout << " 4. Boxes  [_] " << endl;
     cout << " 5. Custom [?] " << endl;
        int choice;
        cin >> choice;
        return choice;
    }
    // Check to see if valid menu options were enterd
    bool checkMenu(){
        int choice = formatMenu();
        
        while (!(choice > 0 && choice < 4)){
            cout << "Try again." << endl;
            choice = formatMenu();
        }
        
        int design = designMenu();

        while (!(design > 0 && design < 6)){
            cout << "Try again." << endl;
            design = designMenu();
        }

        gridSizeOpt = choice;
        gridDesignOpt = design;

            return true;
       
    }
    // Asks the user to ender diamension
    int getDimension(){
        int d;
        cout << "Enter a dimension: " << endl;
        cin >> d;
        return d;
    }
    // Sets the length or width of grid of calling getDimension()
    // Calls appropriate draw function to draw the grid
    void determineGrid(){
        int length;
        int width;
        // choose any grid size.
        switch (gridSizeOpt){
            case 1: 
                cout << " Square ";
                length = getDimension();
                width = length;
                break;
            case 2:
                cout << " Rectangle ";
                length = getDimension();
                width = getDimension();
                break;
            case 3:
                cout << " Random Grid Size";
                length = rand() % 10 +1;
                width = rand() % 10 +1;
                break;
        }
        // choose any grid design. 
        switch(gridDesignOpt){
            case 1:
                cout << " Points " << endl;
                points(length, width);
                break;
            case 2:
                cout << " Stars " << endl;
                stars (length,width);
                break;
            case 3:
                cout << " Lines " << endl;
                lines (length,width);
                break;
            case 4: 
                cout << " Boxes " << endl;
                boxes (length,width);
                break;
            case 5: 
                cout << " UserCustom " << endl;
                UserCustom (length,width);
                break;
               }
    }
    // Draws a grid with points symbol.
    void points(int x, int y){
        for (int i= 0; i < x; i++){
            for (int j=0; j<y; j++){ 
                cout << " . "; 
            }
            cout << endl;
        }
        }
    // Draws a grid with stars symbol.
    void stars (int x, int y){
        for (int i= 0; i < x; i++){
            //cout << "."; // 3 times
            for (int j=0; j<y; j++){ 
                cout << " * "; 
            }
            cout << endl;
    }
    }
    // Draws a grid with lines symbol.
    void lines (int x, int y){
        for (int i= 0; i < x; i++){
            for (int j=0; j<y; j++){ 
                cout << " | "; 
            }
            cout << endl;
    }
    }
    // Draws a grid with boxes symbol.
    void boxes (int x, int y){
        for (int i= 0; i < x; i++){
             for (int j=0; j<y; j++){ 
                cout << " [_] "; 
            }
            cout << endl;
    }
    }
    // Draws a grid with UserCustom symbol.
    void UserCustom(int x, int y){
        int input;
        cout << "Enter a symbol to denote a cell: ";
        cin >> input;
        for (int i= 0; i < x; i++){
            for (int j=0; j < y; j++){ 
                cout << input << "  " ; 
            }
            cout << endl;
    }
    }