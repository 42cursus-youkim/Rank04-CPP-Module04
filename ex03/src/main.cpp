#include <cstdlib>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "util.hpp"

int main() {
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  ICharacter* me = new Character("me");

  AMateria* tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  // me->equip(tmp);
  // tmp = src->createMateria("cure");
  // me->equip(tmp);

  // ICharacter* bob = new Character("bob");

  // me->use(0, *bob);
  // me->use(1, *bob);

  delete tmp;
  // delete bob;
  delete me;
  delete src;

  // system("leaks prog.out");
  return 0;
}
