
#ifndef JAZZJACKRABBIT_ALIVE_H
#define JAZZJACKRABBIT_ALIVE_H

#include "base_state.h"

class Alive : public BaseState {

public:
  bool can_move() override;
};

#endif // JAZZJACKRABBIT_ALIVE_H
