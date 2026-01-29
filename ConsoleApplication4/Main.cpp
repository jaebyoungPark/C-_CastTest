// ConsoleApplication4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Test1.h"
#include "Animal.h"

using namespace std;


int main()
{
	Test1* MyTest1 = new Test1();

	MyTest1->CachedCreature = new Animal();

	Creature* MyCreature =  MyTest1->GetOwningPlayerCreature();
	cout << MyCreature << endl;


	Pawn* MyPawn =  MyTest1->GetOwningPlayerCreature();
	cout << MyPawn << endl;

	
	Animal* MyAnimal = MyTest1->GetOwningPlayerCreature<Animal>();
	cout << MyAnimal << endl;



	 

	return 0;




}
