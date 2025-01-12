#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

string mostCommonWord(string document)
{
    unordered_map<string, int> wordCount;
    vector<string> wordOrder;
    string word = "";

    for (char c : document)
    {
        if (c == ' ')
        {
            if (!word.empty())
            {
                for (char &ch : word)
                {
                    ch = tolower(ch);
                }
                if (wordCount[word] = 0)
                {
                    wordOrder.push_back(word);
                }
                wordCount[word]++;
                word = "";
            }
        }
        else
        {
            word += c;
        }
    }

    if (!word.empty())
    {
        for (char ch : word)
        {
            ch = tolower(ch);
        }
        if (wordCount[word] == 0)
        {
            wordOrder.push_back(word);
        }
        wordCount[word]++;
    }

    string mostCommonWord;
    int maxCount = 0;

    for (const string &w : wordOrder)
    {
        if (wordCount[w] > maxCount)
        {
            maxCount = wordCount[w];
            mostCommonWord = w;
        }
    }
    return mostCommonWord;
}

int main()
{
    string document;
    cin >> document;

    cout << mostCommonWord(document);
    return 0;
}