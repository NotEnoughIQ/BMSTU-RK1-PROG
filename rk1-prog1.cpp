#include <iostream>
#include <cstring>
#include <clocale>
using namespace std;
int main()
{
	int size;

	cout << "Amount of the books in library: ";
	cin >> size;
    cout << endl;

	char**names = new char*[size];
	char**author = new char*[size];

	int*Year = new int[size];
	int*copies = new int[size];
	cin.ignore();

	for (int i = 0; i<size; ++i){
		char buffer[100];
		char buffer1[100];

		cout << "Name of the book: ";
		cin.getline(buffer,100);

		names[i] = new char[strlen(buffer)];
		strcpy(names[i], buffer);

		cout << "Autor's name: ";
		cin.getline(buffer1,100);

		author[i] = new char[strlen(buffer1)];
		strcpy(author[i], buffer1);

		cout << "Year of publicity: ";
		cin >> Year[i];

		cout << "Amount copies of the books: ";
		cin >> copies[i];
        cout << endl;
		cin.ignore();
	}
	for (int i = 0; i<size-1; ++i){
		for (int j = 0; j<size-i-1; ++j){
			if (strcmp(names[j], names[j+1])>0){
				swap(names[j], names[j+1]);

				swap(author[j], author[j+1]);

				swap(Year[j], Year[j+1]);

				swap(copies[j], copies[j+1]);
			}
		}
	}

    cout << "___________________________"<<endl<<endl;

	for (int i = 0; i<size; ++i){
		cout << " Name of the book - " << names[i]<<endl << " Autor's name: - " << author[i]<<endl << " Year of publicity:  - " << Year[i]<<endl << " Amount copies of the books: - " << copies[i]<<endl<<endl; 
	}return 0;

    delete(names);
    delete(author);
    delete(Year);
    delete(copies);

}