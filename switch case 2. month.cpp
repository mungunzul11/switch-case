#include <iostream>

using namespace std ;

int main () {
	int num;
	cout<<"Input number:  ";
	cin>>num;
	switch (num){
	
	case 1 && 3 && 5 && 7 && 8 && 10 && 12:
		cout<<"Total number of days =31";
		break;
	case 2 :
		cout<<"february=28";
		break;
	case 3 :
		cout<<"March=30";
		break;
	case 4 :
		cout<<"April=31";
		break;
	case 5 :
		cout<<"May=30";
		break;
	case 6 :
		cout<<"June=31";
		break;
	case 7 :
		cout<<"July=30";
		break;
	case  8:
		cout<<"August=31";
		break;
	case 9 :
		cout<<"September=31";
		break;
	case 10 :
		cout<<"October=31";
		break;
	case 11 :
		cout<<"November=30";
		break;
	case 12 :
		cout<<"Desember=31";
		break;
		default :
			cout<<"invalid number";
		}
	
	return 0;
}
