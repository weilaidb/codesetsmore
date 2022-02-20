#include "cstringpub.h"
#include "cdefinepub.h"
#include <string.h>
#include <iomanip>


CStringPub::CStringPub()
{

}

string CStringPub::input()
{
    string strinput("");
    char buf[1024] = {0};

    while (cin.getline(buf, sizeof(buf)))
    {
        tcout << "buf:" << buf << endl;
        if(buf[0] == '\0')
        {
            break;
        }
        strinput += buf;
        memset(buf,0,sizeof(buf));
    }
    tcout << "strinput e:" << strinput << endl;
    tcout << "strinput.length():" << strinput.length() << endl;

    return strinput;
}

string CStringPub::replace(string subject, const string& search,const string& replace)
{
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }
    return subject;
}

void CStringPub::printlength(string str)
{
    tcoutever << str.length() << endl;
}

WORD32 CStringPub::length(string str)
{
    return str.length();
}

void CStringPub::printlength(string tips, string str)
{
    tcoutever << tips << "[str]" << str.length() << endl;
    tcoutever << tips << "[msg]" << str.length()/2 << endl;
}

WORD32 CStringPub::findpos(string s, string findstr, vector<int> &vecpos)
{
    string::size_type pos = 0;
    string::size_type posold = 0;
    string strorg(s);

    vecpos.clear();
    while((pos = s.find(findstr)) != s.npos)
    {
        vecpos.push_back(pos + posold);

        posold += pos + findstr.size();
        s = strorg.substr(posold);
    }

    return vecpos.size();
}

void CStringPub::printvec(vector<int> &vec)
{
    WORD32 dwLp =  0;

    cout << "vec size:" << vec.size() << endl;
    for(dwLp = 0;dwLp < vec.size();dwLp++)
    {
        cout << "No:" << setw(3) << dwLp << "," << vec.at(dwLp) << endl;
    }
}

void CStringPub::vecsize(vector<int> &vec)
{
    cout << "vec size:" << vec.size() << endl;
}

void CStringPub::vecsize(string tips, vector<int> &vec)
{
    cout << tips << vec.size() << endl;
}

