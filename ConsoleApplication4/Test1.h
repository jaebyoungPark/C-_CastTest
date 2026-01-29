#pragma once

class Pawn;
class Animal;
class Creature;

class Test1
{
public:
	Creature* GetOwningPlayerCreature();

	template<class T>
	T* GetOwningPlayerCreature()
	{
		return reinterpret_cast<T*>(GetOwningPlayerCreature());
    }

public:
	Creature* CachedCreature;

};