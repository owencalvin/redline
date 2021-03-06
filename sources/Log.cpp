#include "../headers/Log.h"

using namespace std;

namespace HE_Arc::RPG {
/**
 * Write a log inside a specified path
 * @param path The file path
 * @param log The log text
 */
void Log::write(string path, string log) {
  ofstream stream = ofstream(path, ios_base::app);

  time_t now = time(0);
  char *dt = ctime(&now);

  stream << "==================" << endl;
  stream << dt << endl;
  stream << log << endl;
  stream << "==================" << endl;
  stream << endl;

  stream.close();
}

/**
 * Write a transaction between errors inside the transactions.log file
 * @param seller The hero who sell the item
 * @param client The hero who buy the item
 * @param pObject The sold object
 * @param price The price of the object
 */
void Log::writeTransaction(Hero *seller, Hero *client, IObject *pObject,
                           float price) {
  Log::write("transactions.log",
             seller->getName() + "(" + seller->getType() + ") a vendu " +
                 pObject->getName() + "(" + to_string(pObject->getFeature()) +
                 ") à " + client->getName() + "(" + client->getType() + ")" +
                 " pour " + to_string(price) + "$");
}

/**
 * Write a fight between heroes/monsters inside the fights.log file
 * @param attacker The attacker
 * @param attacked The attacked
 */
void Log::writeFight(Attackable *attacker, Attackable *attacked, int damage) {
  string isDeadStr = "";

  if (attacked->isDead()) {
    isDeadStr = " (MORT)";
  }

  Log::write("fights.log", attacker->getName() + "(" + attacker->getType() +
                               ") a attaqué " + attacked->getName() + "(" +
                               attacked->getType() +
                               ") dommage: " + to_string(damage) + isDeadStr);
}
} // namespace HE_Arc::RPG
