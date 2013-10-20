#include <iostream>
#include <vector>
using namespace std;
int main ()
{
	vector<int> myvector (3,100);
	vector<int> myvector2 (1,500);
	vector<int>::iterator it = myvector.begin(), it2 = myvector2.begin();
	it++;	
	myvector.insert(it,500);
	
	/*for(int j = 0; j < myvector.size(); j++)
		if(myvector.at(j) > 50)
			it++;

	myvector.insert(it,50);			
	*/
	/*myvector.insert(it, myvector.at(0));
	cout << myvector2.size() << endl;

*/	
	for(int i = 0; i < myvector.size(); i++)
		cout << myvector.at(i) << " ";		

	//for(it = myvector.begin(); it != myvetor.end(); it++)

	//it = 
	
	return 0;
}
