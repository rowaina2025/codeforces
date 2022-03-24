#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    for(int i = 0; i<cases; i++){
        
        string word;
        cin >> word;
        int Size = word.size();
        char c;
        cin >> c;
        if(word[(Size/2)] == c)
           cout << "YES" << endl;
        else
           cout << "NO" << endl;
    }
    return 0;
}
