#include<iostream>
using namespace std;
int main(){
	string line ,temp = "";
	
	cout<<"Enter a String: ";
	getline(cin, line);
	for(int i=0; i<line.size(); i++){
		if(line[i] >= 'a' && line[i] <= 'z' || line[i] >= 'A' && line[i]<='Z'){
			temp += line[i];
		}
	}
	cout<<"\nEntered String: "<<line;
	cout<<"\nString after removing everything except Alphabets is: "<< temp;
	return 0;
}

