#include<iostream>
#include<vector>
#include<map>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    map<int, int> Dave;
    for (int nr : nums) {
        if (Dave.find(nr) == Dave.end()) {
            Dave.insert({nr, 1});
        }
        else
            return true;        
    }
    return false;
}

bool isAnagram(string s, string t){

    map<char, int> anagram_1;

    if(strlen(s)!=strlen(t))
    {
        return false;
    }


    for(char lit : s)
    {
       if(anagram.find(lit)  == anagram.end())
       {
            anagram.insert({lit, 1});
       }
       else
            anagram[lit] ++;
    }

    map<char, int> anagram_2;
    for(char lit : t)
    {
        if()
    }

}

int main()
{
    int n;
    n=0;
    cout<<n;
}