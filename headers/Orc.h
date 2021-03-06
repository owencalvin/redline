#pragma once
#include "Monster.h"
#include <string>

using namespace std;

namespace HE_Arc::RPG {
class Orc : public Monster {
public:
  Orc(int strength = 100, int agility = 75, int intelligence = 10, int hp = 200,
      string name = "orc")
      : Monster(strength, agility, intelligence, hp, name) {}

  const string getType() const override { return "orc"; }
};
} // namespace HE_Arc::RPG
