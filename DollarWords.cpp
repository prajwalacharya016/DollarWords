#include <fstream>
#include<iostream>
#include<string>
using namespace std;

bool checkToPrint(string s)
{
    int sum = 0;
    for (std::string::iterator it = s.begin(), end = s.end(); it != end; ++it)
    {
        if(*it>='a' && *it<='z')
            sum=sum+*it-97;
    }

    if(sum==100)
        return true;
    else
        return false;

}
int main()
{
    std::ifstream infile("words.txt");
    string a;
    while (infile >> a)
    {
        if(checkToPrint(a))
        {
            cout<<a<<endl;
        }
    }
}

