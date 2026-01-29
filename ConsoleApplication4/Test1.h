#pragma once

class Pawn;
class Animal;
class Creature;

class Test1
{
public:
	Creature* GetOwningPlayer();

	template<class T>
	T* GetOwningPlayer()
	{
		return dynamic_cast<T*>(GetOwningPlayer());
    }

public:
	Creature* CachedCreature;


};