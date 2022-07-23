#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst) // receiving the address of the list passed into 'display'
{
    list<int>::iterator it;   // creating an iterator named 'it' for pinpointing to the list
    for (it = lst.begin(); it != lst.end(); it++)  // making the iterator run inside the list from first to last
    {
        cout << *it << " ";  // dereferencing of the iterator to get the value in the list -
    }
    cout << endl;
}

int main()
{
    list<int> list1; // list of 0 length //  syntax to create a list
    list1.push_back(5);  // setting values inside the list
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);  
    /* removing elements from the list */
    // list1.pop_front();    
    // display(list1);
    // list1.remove(9);

    /* sorting the list*/
    // list1.sort();

    /* reversing the list */
    list1.reverse();
    display(list1);

    list<int> list2(3); // empty list of size 3
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    // after merging
    list1.merge(list2);
    display(list1);
    return 0;
}