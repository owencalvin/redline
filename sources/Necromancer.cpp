#include <iostream>

#include "../headers/Hero.h"
#include "../headers/Necromancer.h"
#include "../headers/Wizard.h"

using namespace std;

namespace HE_Arc::RPG {
void Necromancer::riseUndeads() {
  if (this->mana >= 2) {
    cout << "Rise Undeads!!!";
  }
}
} // namespace HE_Arc::RPG