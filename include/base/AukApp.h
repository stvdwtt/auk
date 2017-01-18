#ifndef AUKAPP_H
#define AUKAPP_H

#include "MooseApp.h"

class AukApp;

template<>
InputParameters validParams<AukApp>();

class AukApp : public MooseApp
{
public:
  AukApp(InputParameters parameters);
  virtual ~AukApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* AUKAPP_H */
