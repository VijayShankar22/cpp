#include <iostream>
using namespace std;
struct StringData{
	int vowels, consonants, digits, spaces;
};
StringData CalculateString(string);
int main()
{
    string line;
    StringData data;
	cout << "Enter a line of string: ";
    getline(cin, line);
    data = CalculateString(line);
    cout << "Vowels: " << data.vowels << endl;
    cout << "Consonants: " << data.consonants << endl;
    cout << "Digits: " << data.digits << endl;
    cout << "White spaces: " << data.spaces << endl;
    return 0;
}
StringData CalculateString(string line){
	StringData strData;
	strData.consonants = strData.digits = strData.spaces = strData.vowels = 0;
    for(int i = 0; i < line.length(); ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++strData.vowels;
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++strData.consonants;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            ++strData.digits;
        }
        else if (line[i]==' ')
        {
            ++strData.spaces;
        }
    }
    return strData;
}

