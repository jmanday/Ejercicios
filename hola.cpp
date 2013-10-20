#include<vector>
#include <iostream>

using namespace std;

void funcion2(char * nomf){
	cout << nomf;
}


int main(int argc, char **argv){
	/*
	vector<float> v;// = (3.0f, 1.4f);
	v.push_back(3.0);
	cout << v.size();
	//vector<float> Vertices(-0.5,-0.5,0.5,0.5,-0.5,0.5,0.5,0.5,0.5,-0.5,0.5,0.5,-0.5,-0.5,-0.5,0.5,-0.5,-0.5,0.5,0.5,-0.5,-0.5,0.5,-0.5);

	funcion2(argv[1]);*/
	int i;
	cout << "Introduce un numero: ";
	cin >> i;
	if(i%3 == 0)
		cout << "es multiplo de 3";
	else
		cout << i%3 << endl;
	return 0;

}
