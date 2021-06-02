#pragma once
#include <iostream>

#include "Hero.h"
#include "IObject.h"
#include "Potion.h"

using namespace std;

namespace HE_Arc::RPG {
class Wizard : public Hero {
public:
  Wizard(int strength = 10, int agility = 5, int intelligence = 1,
         double hp = 20, string name = "unknown wizard", int mana = 10,
         IObject *pObject = new Potion())
      : Hero(strength, agility, intelligence, hp, name, pObject), mana(mana){};

  void castSpell(const Hero &otherHero);
  void interact(const Hero &hero) override;

  int getMana() const { return this->mana; }

protected:
  int mana = 0;
};
} // namespace HE_Arc::RPG
