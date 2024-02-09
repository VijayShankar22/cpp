//Passing string to a function/method
#include<iostream>
using namespace std;
void display(char *);
void display(string);
int main(){
	char c[20];
	string str;
	cout<<"Enter string 1 (to be stored in string object): ";
	getline(cin, str);
	cout<<"Enter string 2 (to be stored in c type character array): ";
	cin.get(c, 20, '\n');
	display(c);
	display(str);
	return 0;
}
void display(char s[]){
	cout<<"Entered character array is: "<<s<<endl;
}
void display(string s){
	cout<<"Entered String is: "<<s<<endl;
}


