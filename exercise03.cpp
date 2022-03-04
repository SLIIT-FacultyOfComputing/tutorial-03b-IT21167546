#include <iostream>

using namespace std;

struct Box{
int length;
int width;
int hight;
};

int volume(Box B);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
  struct Box B1;
  struct Box B2;
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> B1.hight;
    cout << "Enter Box 1 Width : ";
    cin >> B1.width;
    cout << "Enter Box 1 Length : ";
    cin >> B1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> B2.hight;
    cout << "Enter Box 2 Width : ";
    cin >> B2.width;
    cout << "Enter Box 2 Length : ";
    cin >> B2.length;
    
    // 5. Replace the coding below to pass the Box type structure
    //totalVolume = volume( , , )
           //  + volume( , , );
  totalVolume = volume(B1)
             + volume(B2);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
int volume(Box B)
{

  return B.hight * B.width * B.length ; 
}


// Implement the functions here
