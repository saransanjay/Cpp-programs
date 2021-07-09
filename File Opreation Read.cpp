#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //input fstream for reading
    //file is ifstream variable
    ifstream file;

    //string line is used to store the one line of the text
    string line;

    //file.open (location)
    file.open("D:\\C&CPP\\Test for c++\\file handling(writing mode)\\storeData.txt");

    //file is EOF(End of File)
    while(file)
    {
        //getline is used to get one line in text
        getline(file,line);
        cout<<line<<endl;
    }
    file.close();
    return 0;
}
