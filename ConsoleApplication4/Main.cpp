// ConsoleApplication4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Test1.h"
#include "Animal.h"

using namespace std;


int main()
{
	Test1* MyTest1 = new Test1();

	//MyTest1->CachedCreature = new Animal();
	//MyTest1->CachedCreature = new Creature();
	MyTest1->CachedCreature = new Animal();
	cout << MyTest1->CachedCreature << endl;

	Creature* MyCreature =  MyTest1->GetOwningPlayer();
	cout << MyCreature << endl;

	Animal* MyAnimal = MyTest1->GetOwningPlayer<Animal>();

	
	//Animal* MyAnimal = MyTest1->GetOwningPlayerCreature();
	//cout << MyAnimal << endl;

	//cout << MyAnimal->JumpHeight << endl;



	 

	return 0;




}
