#ifndef __RENDERER_H__

class Renderer {
  unsigned int VBO;
  unsigned int VAO;
  unsigned int vertexShader;
  unsigned int fragmentShader;
  unsigned int shaderProgram;
  void initFragmentShader();
  void initVertexShader();
 public:
  Renderer();
  void render();
};

#endif
