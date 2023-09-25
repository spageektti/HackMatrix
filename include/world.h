#ifndef __WORLD_H__
#define __WORLD_H__

#include <vector>
#include <glm/glm.hpp>
#include <glm/gtx/hash.hpp>
#include "renderer.h"
#include <unordered_map>

class Renderer;
struct Cube {
  glm::vec3 position;
  int blockType;
  int order;
};
class World {
  std::unordered_map<glm::vec3, Cube> cubes;
  std::unordered_map<glm::vec3, int> appCubes;
  Renderer* renderer;
public:
  const std::vector<Cube> getCubes();
  const std::vector<glm::vec3> getAppCubes();
  void addCube(glm::vec3, int blockType);
  void addAppCube(glm::vec3);
  void attachRenderer(Renderer* renderer);
  Cube* getVoxel(float x, float y, float z);
  World();
  ~World();
};

#endif
