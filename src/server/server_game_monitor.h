#ifndef GAME_MONITOR
#define GAME_MONITOR

#include "../common/player_status_DTO.h"
#include "../common/queue.h"
#include "../common/snapshot_DTO.h"
#include "../data/player_info_dto.h"
#include <cstdint>
#include <functional>
#include <list>
#include <mutex>
class GameMonitor {
private:
  // cppcheck-suppress unusedStructMember
  uint8_t players_count;
  // cppcheck-suppress unusedStructMember
  std::list<std::reference_wrapper<Queue<Snapshot>>> queues;
  std::mutex mtx;

public:
  GameMonitor();
  void broadcast(Snapshot &msj);
  const uint8_t addPlayer(PlayerInfo &player_info, Queue<Snapshot &> &queue);
  void ereasePlayer(const Queue<Snapshot &> &queue);
  ~GameMonitor();
};

#endif