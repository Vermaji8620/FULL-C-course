// #include <iostream>
// #include <fstream>
// /*

// // the useful classes for working with files in c++ are:
// 1. fstreambase
// 2. ifstream   ---> derived from fstreambase
// 3. ofstream   ---> derived from fstreambase

// and all the above three classes are derived from 'fstream' class
// */

// // in order to work with files , there are two ways to open the files....primarily, there are 2 ways to open the file:
// /*
// 1. using the constructor
// 2. using the member functions open() of the classs
// */
// using namespace std;

// int main()
// {
//     string st = " fmmmekwmfemccccccccccccccccccccccccaaaaaaaw bhai";
//     string st2;
//     // write operations-------
//     // opening file using constructor and writing to it
//     ofstream out("Sample_file.txt");
//     out << st;

//     // read operations---------
//     // opening files using constructor and reading it
//     ifstream in("Sample_file.txt");
//     getline(in, st2);
//     // in >> st2;
//     cout << st2;
//     return 0;
// }

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream hout("Sample_file.txt");
    string name;
    cout << "Enter your name";
    cin >> name;
    // hout << " My name is " + name << endl;
    hout.close();

    ifstream in;
    string st;
    in.open("Sample_file.txt");
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    cout << st;
    in.close();
    return 0;
}