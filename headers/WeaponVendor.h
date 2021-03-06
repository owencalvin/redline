#pragma once
#include "Shield.h"
#include "Sword.h"
#include "Vendor.h"
#include <string>

using namespace std;

namespace HE_Arc::RPG {
class WeaponVendor : public Vendor {
public:
  WeaponVendor(int strength = 10, int agility = 5, int intelligence = 1,
               int hp = 20, string name = "unknown weapon vendor",
               float factor = 1.2, IObject *pObject = new Sword());

  const string getType() const override { return "weapon vendor"; }
};
} // namespace HE_Arc::RPG
