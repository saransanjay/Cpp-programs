#include<iostream>
#include<fstream>
using namespace std;
int main(){

    //output fstream for writing
    //file is ifstream variable
    ofstream file;

    //line is text that store in a text file
    string line="welcome to c++ programming\n what's your name";

    //file.open (location)
    file.open("storeData.txt");

    //line insert in file
    file<<line;

    file.close();

    return 0;
}

