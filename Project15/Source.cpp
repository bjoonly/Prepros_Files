#include"Calc.h"
#include"StringWorker.h"
#define CLEAR system("cls");
#define PI 3.14



int main() {

	StringWorker::sum("IT", "STEP");
	int result=Calc::sum(10, 5);
	int result2= Calc::mnozenia(7, 2);
	cout << result << endl;
	cout << result2 << endl;
	//for (int i = 0; i < 10; i++)
	//begin
	//	cout << i << endl;
    //end
	//cout << "hello world 1!\n";
	//clear
	//cout << "hello world 2!\n";
	//clear
	//cout << "hello world 3!\n";
	//clear
	//cout << PI << endl;






	system("pause");
	return 0;
}