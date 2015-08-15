#ifndef _GG_VIEWER_
#define _GG_VIEWER_

#include <GL/glew.h>

#include <glfw3.h>

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>

#include <glm/glm.hpp>
using namespace glm;
#include "shader.hpp"
#include "texture.hpp"
#include "Constants.hpp"
#include "Camera.hpp"
#include <vector>
#include <time.h>
#include <iostream>


class Viewer {
public:
	Viewer();
	bool init();
	bool loop();
	
private:
	bool ok;
	GLFWwindow* window;
	GLuint vboID;
	GLuint vaoID;
	GLuint colorVboID;
	GLuint programID;
	Camera camera;
	GLuint matrixID;
	double lastTime;
};

#endif