#include <iostream>
#include <stdio.h>
#include <fstream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
set<string> headfile;
void ProcessFile(const string &filein)
{
    ifstream in;
    in.open(filein);
    string str;
    while(!in.eof())
    {
        getline(in,str);
        if(str.find("#include ") == str.npos) continue;
        string s = str.substr(10,str.size() - 11);
        if(!headfile.count(s));
        {
            headfile.push_back(s);
            ProcessFile(s);
        }
        else throw "Self-referential includes is detected:"<<s<<endl;
    }
}
int  main()
{
    ProcessFile("in.txt");
    for_each(headfile.begin(),headfile.end(),[](const string &st){cout<<st<<endl;});
    return 0;
}
