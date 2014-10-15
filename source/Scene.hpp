#ifndef SCENE_HPP
#define SCENE_HPP

#include <vector>

#include "engine/Camera.hpp"
#include "engine/Light.hpp"
#include "engine/Trigger.hpp"
#include "Player.hpp"
#include "Portal.hpp"

namespace glPortal {

class Scene {
public:
  Player player;
  Camera camera;
  std::vector<Entity> walls;
  std::vector<Trigger> triggers;
  std::vector<Light> lights;
  std::vector<Entity> models;
  Portal bluePortal;
  Portal orangePortal;
  Entity start;
  Entity end;
};

} /* namespace glPortal */

#endif /* SCENE_HPP */
