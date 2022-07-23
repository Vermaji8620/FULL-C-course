#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << " displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // use the syntax below or the above one
    // cout << endl;
    // for (int i = 0; i < v.size(); i++)
    // {

    //     cout << v.at(i) << " ";
    // }
}

int main(int argc, char const *argv[])
{
    // WAYS TO CREATE A VECTOR--
    vector<int> vec1; // ZERO LENGTH INTEGER VECTOR
    int element, size = 5;
    vector<char> vec2(4); // 4- ELEMENT CHARACTER VECTOR
    // cout << " enter the size" << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << " enter an element to add to this vector" << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();

    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // // vec1.insert(iter + 1, 5, 566);
    // display(vec1);

    // vector<char> vec2(4); // 4- ELEMENT CHARACTER VECTOR
    // vec2.push_back('5');
    // display(vec2);
    vector<char> vec3(vec2); // 4-ELEMENT character vector from vec2
    // display(vec3);
    vector<int> vec4(4, 13); // 4-ELEMENT vector of 35
    display(vec4);

    cout << vec4.size();
    return 0;
}