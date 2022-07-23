// we use map to store the 'object';that is, the 'key:value' pair

#include <iostream>
#include <map>
#include <string>
using namespace std;

// MAP IS AN ASSOCIATIVE PROPERTY
int main(int argc, char const *argv[])
{
    map<string, int> marksMap; // creating a map
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;
    map<string, int>::iterator iter; // creating an iterator for traversing
    marksMap.insert({{"Kozume", 169}, {"kuroo", 187}});
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n"; // first is for 'key',   second is for 'value'; in 'key:value' pair
    }
    cout << " the size is: " << marksMap.size() << endl;
    cout << " the max_size is: " << marksMap.max_size() << endl;
    cout << " the empty is: " << marksMap.empty() << endl;
    return 0;
}