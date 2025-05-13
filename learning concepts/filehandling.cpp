#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char arr[100];
    cout << "Enter your name and age";
    cin.getline(arr, 100);

    int x; float y;
    fstream myfile("xyz.txt", ios::out | ios::app)
    //ofstream myfile("xyz.txt", ios::app);
    myfile << arr;
    myfile.close();

    cout << "File write operation success";


    ifstream obj("xyz.txt");
    obj.getline(arr, 100);

    cout <<"content: " << arr;
    return 0;
}