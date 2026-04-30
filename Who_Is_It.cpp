#include <bits/stdc++.h>

using namespace std;

class Student 
{
    public:
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    int tc; cin >> tc; 
    for(int i = 0; i < tc; i++){
        Student a , b , c;
        cin >> a.id >> a.name >> a.section >> a.marks;
        cin >> b.id >> b.name >> b.section >> b.marks;
        cin >> c.id >> c.name >> c.section >> c.marks;
        
        Student high = a;
        if(b.marks >high.marks ||(b.marks == high.marks && b.id < high.id))
            high = b;
        if(c.marks >high.marks ||(c.marks == high.marks && c.id < high.id))
            high = c;

        cout << high.id << " " << high.name << " " << high.section << " " << high.marks << endl;
    }

    return 0;
}
